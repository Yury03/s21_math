#include "s21_math.h"

long double s21_cos(double x) {
  int sign = -1;
  int n = 0;
  long double result = 1.L;
  long double pow = 1.L;
  long double fact = 1.L;
  double d = 1.;

  x = s21_fmod(x, S21_M_PI * 2);
  while (s21_fabs(d) >= 0.000000000000001) {
    fact *= (long double)(n + 1) * (long double)(n + 2);
    pow *= x * x;
    d = ((long double)sign * pow) / fact;
    result += d;
    n += 2;
    sign *= -1;
  }
  return result;
}

long double s21_ceil(double x) {
  double result;
  if (x != x) {
    result = x;
  } else if (x == s21max_inf) {
    result = s21max_inf;
  } else if (x == s21min_inf) {
    result = s21min_inf;
  } else {
    result = (x - (long long int)x != 0 && x > 0) ? (long long int)x + 1
                                                  : (long long int)x;
  }
  return result;
}

int s21_abs(int x) { return x < 0 ? -x : x; }

long double s21_fabs(double x) { return x > 0 ? x : -x; }

long double s21_exp(double x) {
  bool flag = false;
  long double res = 1;
  if (x == s21max_inf) {
    res = x;
    flag = true;
  }
  if (x == s21min_inf) {
    res = 0;
    flag = true;
  }
  if (flag == false) {
    bool minus = false;
    if (x < 0) {
      x = -x;
      minus = true;
    }
    long double value = 1;
    long double i = 1;
    while (s21_fabs(value) > s21min_exp) {
      if (res > __DBL_MAX__) {
        res = s21max_inf;
        break;
      }
      value = value * (x / i);
      i++;
      res = res + value;
    }
    if (minus == true) {
      res = 1.0 / res;
    }
  }
  return res;
}

long double s21_fmod(double x, double y) {
  long double res = 0;
  if (y < 0) {
    y = -y;
  }
  if (x != x || y != y || y == 0 || x == s21max_inf || x == s21min_inf) {
    res = s21nan;
  } else if (y == s21max_inf || y == s21min_inf) {
    res = x;
  } else {
    if (x == y) {
      res = 0.;
    } else if (x == -y) {
      res = -0.;
    } else if (x > 0) {
      res = x - (s21_ceil(x / y) - 1.0) * y;
    } else if (x < 0) {
      res = x - (s21_ceil(x / y)) * y;  // todo разобраться
    }
  }
  return res;
}

long double s21_log(double x) {
  if (x == s21max_inf) return x;
  if (x == 0) return s21min_inf;
  if (x < 0) return s21nan;
  long double result = 0, compare = 0;
  int e_repeat = 0;
  for (; x >= e; e_repeat++) x /= e;
  for (int i = 0; i < 1000; i++) {
    compare = result;
    result = compare + 2 * (x - s21_exp(compare)) / (x + s21_exp(compare));
  }
  result += e_repeat;
  return result;
}

long double s21_pow(double base, double deg) {
  long double ret = 0;
  bool b = 1;
  long double flag = 1.0;
  long double x = base;
  long double y = deg;
  if (x == s21min_inf) {
    if (y == s21min_inf) {
      ret = 0;
      b = 0;
    }
    if (y == 1 && b) {
      ret = s21min_inf;
      b = 0;
    }
    if ((y != y) && b) {
      ret = s21nan;
      b = 0;
    }
    if (y == -1. && b) {
      ret = -0;
      b = 0;
    }

    if (y == 0. && b) {
      ret = 1;
      b = 0;
    }

    if (b) {
      ret = s21max_inf;
      b = 0;
    }
  }
  if ((x == 0.0 && y == -1) && b) {
    ret = s21max_inf;
    b = 0;
  }
  if (x == -0.0 && b) {
    if (y != y) {
      ret = s21nan;
      b = 0;
    }
    if (y == -1.) {
      ret = s21min_inf;
      b = 0;
    }
    if (y == s21min_inf) {
      ret = s21max_inf;
      b = 0;
    }
  }
  if (x < -0.0 && b) {
    if (y == s21max_inf) {
      ret = 1.0;
      b = 0;
    }
    if ((y == s21min_inf) && b) {
      ret = 1.0;
      b = 0;
    }
    if (((y > 0. && y < 1.0) || (y != (int)y)) && b) {
      ret = s21nan;
      b = 0;
    }
  }
  if (x == 1.0 && b) {
    ret = 1;
    b = 0;
  }
  if ((x < -0 && y == (int)y) && b) {
    x = -x;
    flag = -1.0;
    if ((int)y % 2 == 0) flag *= -1.0;
  }
  if (b) ret = y == 0 ? 1 : x == 0 ? 0 : flag * s21_exp(y * s21_log(x));
  return ret;
}

long double s21_atan(double x) {
  long double temp = 1;
  long double result = 0;
  int i = 0;
  double eps = 0.0000000001;
  int flag = 1;
  if (x < 0 || x >= 0) {
    if (s21_fabs(s21_fabs(x) - 1) < 1e-6) {
      result = S21_M_PI_4 * x;
    } else if (x > -1 && x < 1) {
      while (s21_fabs(temp - result) > eps) {
        temp = result;
        result +=
            ((s21_pow(-1., i)) * (s21_pow(x, (1. + (2. * i))))) / (1. + 2. * i);
        i++;
      }
    } else if (x < -1 || x > 1) {
      long double res_tmp = 0;

      while (s21_fabs(temp - res_tmp) > eps || flag) {
        temp = res_tmp;
        res_tmp += ((s21_pow(-1., i)) * (s21_pow(x, (-1. - (2. * i))))) /
                   (-1. - 2. * i);
        flag = 0;
        i++;
      }
      result = res_tmp + (S21_M_PI * (s21_sqrt(s21_pow(x, 2.)))) / (2. * x);
    }
    if (x == 1.0 / 0.0) {
      result = S21_M_PI_2;
    }
    if (x == -1.0 / 0.0) {
      result = -S21_M_PI_2;
    }
  } else {
    result = s21nan;
  }

  return result;
}

long double s21_asin(double x) {
  long double result = 0;
  if (x > -1 && x < 1) {
    result = s21_atan(x / s21_sqrt(1 - s21_pow(x, 2)));
  } else if (x == 1) {
    result = S21_M_PI_2;
  } else if (x == -1) {
    result = -S21_M_PI_2;
  } else {
    result = 0.0 / 0.0;
  }
  return result;
}

long double s21_acos(double x) {
  long double result = 0.0;

  if (x > 0 && x < 1) {
    result = s21_atan(s21_sqrt(1 - s21_pow(x, 2)) / x);
  } else if (x > -1 && x < 0) {
    result = s21_atan(s21_sqrt(1 - s21_pow(x, 2)) / x) + S21_M_PI;
  } else if (x == -1) {
    result = S21_M_PI;
  } else if (x == 1) {
    result = 0;
  } else if (x == 0 || x == -0) {
    result = S21_M_PI_2;
  } else {
    result = 0.0 / 0.0;
  }
  return result;
}

long double s21_sin(double x) {
  x = s21_fmod(x, 2 * S21_M_PI);
  long double sum = x;
  long double d = 1;
  long double pow = x;
  int n = 1;
  long double fact = 1;

  while (s21_fabs((double)d) > 0.000000000000001) {
    fact *= ((2 * n) * (2 * n + 1));
    pow *= (-1 * x * x);
    d = pow / fact;
    sum += d;
    n++;
  }
  return sum;
}

long double s21_sqrt(double x) {
  long double result = x / 2;
  long double h = 0;

  if (x < 0 || x != x) {
    result = s21nan;
  }

  else if (x == 0) {
    result = 0;
  } else if (x == 1) {
    result = 1;
  } else if (x == s21max_inf) {
    result = s21max_inf;
  } else {
    while (result != h) {
      h = result;
      result = (x / h + h) / 2;
    }
  }
  return result;
}
long double s21_tan(double x) {
  long double res;
  if (x == 0) {
    res = 0.0;
  } else {
    res = s21_sin(x) / s21_cos(x);
  }
  return res;
}

long double s21_floor(double x) {
  long double res = 0;
  bool flag = false;
  if (x == s21max_inf || x == s21min_inf || x != x) {
    if (x != x) {
      res = s21nan;
    } else {
      res = x;
    }
    flag = true;
  }
  if (flag == false) {
    res = (long long int)x;
    if (res != x && x < 0.0) {
      res--;
    }
  }
  return res;
}
