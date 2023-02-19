#ifndef _CHECK_H_
#include <check.h>
#endif
#ifndef _MATH_H_
#include <math.h>
#endif
#include "s21_math.h"

START_TEST(sin_test) {
  ck_assert_ldouble_nan(s21_sin(s21max_inf));
  ck_assert_ldouble_nan(s21_sin(s21min_inf));
  ck_assert_ldouble_nan(s21_sin(s21nan));
  ck_assert_ldouble_eq_tol(s21_sin(M_PI_2), sin(M_PI_2), 1e-15);
  ck_assert_ldouble_eq_tol(s21_sin(PI_6), sin(PI_6), 1e-15);
  ck_assert_ldouble_eq_tol(s21_sin(-PI_6), sin(-PI_6), 1e-15);
  ck_assert_ldouble_eq_tol(s21_sin(PI_56), sin(PI_56), 1e-15);
  ck_assert_ldouble_eq_tol(s21_sin(-PI_56), sin(-PI_56), 1e-15);
  ck_assert_ldouble_eq_tol(s21_sin(0.5), sin(0.5), 1e-15);
  ck_assert_ldouble_eq_tol(s21_sin(-0.5), sin(-0.5), 1e-15);
  ck_assert_ldouble_eq_tol(s21_sin(-1), sin(-1), 1e-15);
  ck_assert_ldouble_eq_tol(s21_sin(1), sin(1), 1e-15);
  ck_assert_ldouble_eq_tol(s21_sin(1.1), sin(1.1), 1e-15);
  ck_assert_ldouble_eq_tol(s21_sin(-2.1), sin(-2.1), 1e-15);
  ck_assert_ldouble_eq_tol(s21_sin(0), sin(0), 1e-15);
  ck_assert_ldouble_eq_tol(s21_sin(-0), sin(-0), 1e-15);
  ck_assert_ldouble_eq_tol(s21_sin(5.123456789123), sin(5.123456789123), 1e-15);
  ck_assert_ldouble_eq_tol(s21_sin(0.00000004564897), sin(0.00000004564897),
                           1e-15);
  ck_assert_ldouble_eq_tol(s21_sin(17000000000.1), sin(17000000000.1), 1e-6);
}
END_TEST

START_TEST(cos_test) {
  ck_assert_ldouble_nan(s21_cos(s21max_inf));
  ck_assert_ldouble_nan(s21_cos(s21min_inf));
  ck_assert_ldouble_nan(s21_cos(s21nan));
  ck_assert_ldouble_eq_tol(s21_cos(M_PI_2), cos(M_PI_2), 1e-15);
  ck_assert_ldouble_eq_tol(s21_cos(-M_PI_2), cos(-M_PI_2), 1e-15);
  ck_assert_ldouble_eq_tol(s21_cos(PI_3), cos(PI_3), 1e-15);
  ck_assert_ldouble_eq_tol(s21_cos(-PI_3), cos(-PI_3), 1e-15);
  ck_assert_ldouble_eq_tol(s21_cos(0.5), cos(0.5), 1e-15);
  ck_assert_ldouble_eq_tol(s21_cos(-0.5), cos(-0.5), 1e-15);
  ck_assert_ldouble_eq_tol(s21_cos(-1), cos(-1), 1e-15);
  ck_assert_ldouble_eq_tol(s21_cos(1), cos(1), 1e-15);
  ck_assert_ldouble_eq_tol(s21_cos(1.1), cos(1.1), 1e-15);
  ck_assert_ldouble_eq_tol(s21_cos(-2.1), cos(-2.1), 1e-15);
  ck_assert_ldouble_eq_tol(s21_cos(0), cos(0), 1e-15);
  ck_assert_ldouble_eq_tol(s21_cos(-0), cos(-0), 1e-15);
  ck_assert_ldouble_eq_tol(s21_cos(5.123456789123), cos(5.123456789123), 1e-7);
  ck_assert_ldouble_eq_tol(s21_cos(0.00000004564897), cos(0.00000004564897),
                           1e-15);
  ck_assert_ldouble_eq_tol(s21_cos(17000000000.1), cos(17000000000.1), 1e-5);
}
END_TEST

START_TEST(tan_test) {
  ck_assert_ldouble_nan(s21_cos(s21max_inf));
  ck_assert_ldouble_nan(s21_cos(s21min_inf));
  ck_assert_ldouble_nan(s21_cos(s21nan));
  ck_assert_ldouble_eq_tol(s21_tan(M_PI_4), tan(M_PI_4), 1e-15);

  ck_assert_ldouble_eq_tol(s21_tan(0.5), tan(0.5), 1e-15);
  ck_assert_ldouble_eq_tol(s21_tan(-0.5), tan(-0.5), 1e-15);
  ck_assert_ldouble_eq_tol(s21_tan(-1), tan(-1), 1e-15);
  ck_assert_ldouble_eq_tol(s21_tan(1), tan(1), 1e-15);
  ck_assert_ldouble_eq_tol(s21_tan(1.1), tan(1.1), 1e-15);
  ck_assert_ldouble_eq_tol(s21_tan(-2.1), tan(-2.1), 1e-8);
  ck_assert_ldouble_eq_tol(s21_tan(0), tan(0), 1e-15);
  ck_assert_ldouble_eq_tol(s21_tan(-0), tan(-0), 1e-15);
  ck_assert_ldouble_eq_tol(s21_tan(5.123456789123), tan(5.123456789123), 1e-14);
  ck_assert_ldouble_eq_tol(s21_tan(0.00000004564897), tan(0.00000004564897),
                           1e-15);
}
END_TEST

START_TEST(asin_test) {
  ck_assert_ldouble_nan(s21_asin(s21max_inf));
  ck_assert_ldouble_nan(s21_asin(s21min_inf));
  ck_assert_ldouble_nan(s21_asin(s21nan));
  ck_assert_ldouble_eq_tol(s21_asin(0.5), asin(0.5), 1e-8);
  ck_assert_ldouble_eq_tol(s21_asin(-0.5), asin(-0.5), 1e-8);
  ck_assert_ldouble_eq_tol(s21_asin(-1), asin(-1), 1e-15);
  ck_assert_ldouble_eq_tol(s21_asin(1), asin(1), 1e-15);
  ck_assert_ldouble_nan(s21_asin(1.1));
  ck_assert_ldouble_eq_tol(s21_asin(0), asin(0), 1e-15);
  ck_assert_ldouble_eq_tol(s21_asin(-0), asin(-0), 1e-15);
  ck_assert_ldouble_eq_tol(s21_asin(0.00000004564897), asin(0.00000004564897),
                           1e-8);
}
END_TEST

START_TEST(acos_test) {
  ck_assert_ldouble_nan(s21_acos(s21max_inf));
  ck_assert_ldouble_nan(s21_acos(s21min_inf));
  ck_assert_ldouble_nan(s21_acos(s21nan));
  ck_assert_ldouble_eq_tol(s21_acos(0.5), acos(0.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(-0.5), acos(-0.5), 1e-5);
  ck_assert_ldouble_eq_tol(s21_acos(-1), acos(-1), 1e-15);
  ck_assert_ldouble_eq_tol(s21_acos(1), acos(1), 1e-15);
  ck_assert_ldouble_nan(s21_acos(1.1));
  ck_assert_ldouble_eq_tol(s21_acos(0), acos(0), 1e-15);
  ck_assert_ldouble_eq_tol(s21_acos(-0), acos(-0), 1e-15);
}
END_TEST

START_TEST(atan_test) {
  ck_assert_ldouble_nan(s21_atan(s21nan));

  ck_assert_ldouble_eq_tol(s21_atan(s21min_inf), atan(s21min_inf), 1e-8);
  ck_assert_ldouble_eq_tol(s21_atan(s21max_inf), atan(s21max_inf), 1e-8);
  ck_assert_ldouble_eq_tol(s21_atan(0.5), atan(0.5), 1e-8);
  ck_assert_ldouble_eq_tol(s21_atan(-0.5), atan(-0.5), 1e-8);
  ck_assert_ldouble_eq_tol(s21_atan(-1), atan(-1), 1e-8);
  ck_assert_ldouble_eq_tol(s21_atan(1), atan(1), 1e-8);
  ck_assert_ldouble_eq_tol(s21_atan(1.1), atan(1.1), 1e-7);
  ck_assert_ldouble_eq_tol(s21_atan(-2.1), atan(-2.1), 1e-7);
  ck_assert_ldouble_eq_tol(s21_atan(0), atan(0), 1e-15);
  ck_assert_ldouble_eq_tol(s21_atan(-0), atan(-0), 1e-15);
  ck_assert_ldouble_eq_tol(s21_atan(5.123456789123), atan(5.123456789123),
                           1e-7);
  ck_assert_ldouble_eq_tol(s21_atan(0.00000004564897), atan(0.00000004564897),
                           1e-8);
  ck_assert_ldouble_eq_tol(s21_atan(12.456), atan(12.456), 1e-8);
  ck_assert_ldouble_eq_tol(s21_atan(-13.4574), atan(-13.4574), 1e-8);
  ck_assert_ldouble_eq_tol(s21_atan(-1367.78), atan(-1367.78), 1e-8);
}
END_TEST

START_TEST(exp_test) {
  ck_assert_ldouble_infinite(s21_exp(s21max_inf));
  ck_assert_ldouble_eq_tol(s21_exp(s21min_inf), exp(s21min_inf), 1e-8);
  ck_assert_ldouble_nan(s21_exp(s21nan));
  ck_assert_ldouble_eq_tol(s21_exp(0.5), exp(0.5), 1e-7);
  ck_assert_ldouble_eq_tol(s21_exp(-0.5), exp(-0.5), 1e-7);
  ck_assert_ldouble_eq_tol(s21_exp(-1), exp(-1), 1e-8);
  ck_assert_ldouble_eq_tol(s21_exp(1), exp(1), 1e-8);
  ck_assert_ldouble_eq_tol(s21_exp(1.1), exp(1.1), 1e-8);
  ck_assert_ldouble_eq_tol(s21_exp(-2.1), exp(-2.1), 1e-8);
  ck_assert_ldouble_eq_tol(s21_exp(0), exp(0), 1e-8);
  ck_assert_ldouble_eq_tol(s21_exp(-0), exp(-0), 1e-8);
  ck_assert_ldouble_eq_tol(s21_exp(5.123456789123), exp(5.123456789123), 1e-8);
  ck_assert_ldouble_eq_tol(s21_exp(0.00000004564897), exp(0.00000004564897),
                           1e-15);
  ck_assert_ldouble_eq_tol(s21_exp(20.1), exp(20.1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(-20.1), exp(-20.1), 1e-8);
}
END_TEST

START_TEST(log_test) {
  ck_assert_ldouble_eq_tol(s21_log(e), log(e), 0.0000001);

  ck_assert_ldouble_infinite(s21_log(s21max_inf));
  ck_assert_ldouble_nan(s21_log(s21min_inf));
  ck_assert_ldouble_nan(s21_log(s21nan));
  ck_assert_ldouble_eq_tol(s21_log(2.2250738585072014e-308),
                           log(2.2250738585072014e-308), 0.0000001);
  ck_assert_ldouble_eq_tol(s21_log(0.0000056654154544338768),
                           log(0.0000056654154544338768), 0.0000001);
  ck_assert_ldouble_eq_tol(s21_log(1548.56), log(1548.56), 0.0000001);
  ck_assert_ldouble_eq_tol(s21_log(564684684546874684.48484544),
                           log(564684684546874684.48484544), 0.0000001);
  ck_assert_ldouble_eq_tol(
      s21_log(5468435435468743546878646847484845848458489498484.545548),
      log(5468435435468743546878646847484845848458489498484.545548), 0.0000001);
  ck_assert_ldouble_eq_tol(s21_log(545456.5536555865445454),
                           log(545456.5536555865445454), 0.0000001);
  ck_assert_ldouble_nan(s21_log(-0.5));
  ck_assert_ldouble_eq_tol(s21_log(1), log(1), 1e-15);
  ck_assert_ldouble_eq_tol(s21_log(1.1), log(1.1), 1e-8);
  ck_assert_ldouble_infinite(s21_log(0));
  ck_assert_ldouble_infinite(s21_log(-0));
  ck_assert_ldouble_eq_tol(s21_log(5.123456789123), log(5.123456789123), 1e-8);
}
END_TEST
/////

/////

START_TEST(sqrt_test) {
  ck_assert_ldouble_nan(s21_sqrt(s21min_inf));
  ck_assert_ldouble_infinite(s21_sqrt(s21max_inf));
  ck_assert_ldouble_nan(s21_sqrt(s21nan));
  ck_assert_ldouble_eq_tol(s21_sqrt(0.5), sqrt(0.5), 1e-15);
  ck_assert_ldouble_nan(s21_sqrt(-0.5));
  ck_assert_ldouble_eq_tol(s21_sqrt(1), sqrt(1), 1e-15);
  ck_assert_ldouble_eq_tol(s21_sqrt(1.1), sqrt(1.1), 1e-15);
  ck_assert_ldouble_eq_tol(s21_sqrt(0), sqrt(0), 1e-15);
  ck_assert_ldouble_eq_tol(s21_sqrt(-0), sqrt(-0), 1e-15);
  ck_assert_ldouble_eq_tol(s21_sqrt(5.123456789123), sqrt(5.123456789123),
                           1e-15);
  ck_assert_ldouble_eq_tol(s21_sqrt(0.00000004564897), sqrt(0.00000004564897),
                           1e-15);
  ck_assert_ldouble_eq_tol(s21_sqrt(170000000000000.1), sqrt(170000000000000.1),
                           1e-8);
}
END_TEST

START_TEST(pow_test) {
  ck_assert_ldouble_eq_tol(s21_pow(1, s21min_inf), pow(1, s21min_inf),
                           1e-8);  // todo
  ck_assert_ldouble_eq_tol(s21_pow(-1, s21min_inf), pow(-1, s21min_inf),
                           1e-8);  // todo

  ck_assert_ldouble_eq_tol(s21_pow(s21min_inf, s21min_inf),
                           pow(s21min_inf, s21min_inf), 1e-8);  // todo
  ck_assert_ldouble_eq_tol(s21_pow(s21max_inf, s21min_inf),
                           pow(s21max_inf, s21min_inf), 1e-8);

  ck_assert_ldouble_eq_tol(s21_pow(0.0, s21max_inf), pow(0.0, s21max_inf),
                           1e-8);
  ck_assert_ldouble_eq_tol(s21_pow(-0.0, s21max_inf), pow(-0.0, s21max_inf),
                           1e-8);
  ck_assert_ldouble_eq_tol(s21_pow(1, s21max_inf), pow(1, s21max_inf),
                           1e-8);  // todo
  ck_assert_ldouble_eq_tol(s21_pow(-1, s21max_inf), pow(-1, s21max_inf),
                           1e-8);  // todo

  ck_assert_ldouble_eq_tol(s21_pow(0.0, 0), pow(0.0, 0), 1e-8);
  ck_assert_ldouble_eq_tol(s21_pow(-0.0, 0), pow(-0.0, 0), 1e-8);
  ck_assert_ldouble_eq_tol(s21_pow(1, 0), pow(1, 0), 1e-8);
  ck_assert_ldouble_eq_tol(s21_pow(-1, 0), pow(-1, 0), 1e-8);
  ck_assert_ldouble_eq_tol(s21_pow(s21nan, 0), pow(s21nan, 0), 1e-8);  //
  ck_assert_ldouble_eq_tol(s21_pow(s21min_inf, 0), pow(s21min_inf, 0),
                           1e-8);  // todo
  ck_assert_ldouble_eq_tol(s21_pow(s21max_inf, 0), pow(s21max_inf, 0), 1e-8);

  ck_assert_ldouble_eq_tol(s21_pow(0.0, -0), pow(0.0, -0), 1e-8);
  ck_assert_ldouble_eq_tol(s21_pow(-0.0, -0), pow(-0.0, -0), 1e-8);
  ck_assert_ldouble_eq_tol(s21_pow(1, -0), pow(1, -0), 1e-8);
  ck_assert_ldouble_eq_tol(s21_pow(-1, -0), pow(-1, -0), 1e-8);
  ck_assert_ldouble_eq_tol(s21_pow(s21nan, -0), pow(s21nan, -0), 1e-8);  //
  ck_assert_ldouble_eq_tol(s21_pow(s21min_inf, -0), pow(s21min_inf, -0),
                           1e-8);  // todo
  ck_assert_ldouble_eq_tol(s21_pow(s21max_inf, -0), pow(s21max_inf, -0), 1e-8);

  ck_assert_ldouble_eq_tol(s21_pow(0.0, 1), pow(0.0, 1), 1e-8);
  ck_assert_ldouble_eq_tol(s21_pow(-0.0, 1), pow(-0.0, 1), 1e-8);
  ck_assert_ldouble_eq_tol(s21_pow(1, 1), pow(1, 1), 1e-8);
  ck_assert_ldouble_eq_tol(s21_pow(-1, 1), pow(-1, 1), 1e-8);

  ck_assert_ldouble_eq_tol(s21_pow(1, -1), pow(1, -1), 1e-8);
  ck_assert_ldouble_eq_tol(s21_pow(-1, -1), pow(-1, -1), 1e-8);

  ck_assert_ldouble_eq_tol(s21_pow(s21min_inf, -1), pow(s21min_inf, -1), 1e-8);
  ck_assert_ldouble_eq_tol(s21_pow(s21max_inf, -1), pow(s21max_inf, -1), 1e-8);

  ck_assert_ldouble_eq_tol(s21_pow(1, s21nan), pow(1, s21nan), 1e-8);

  ck_assert_ldouble_eq(s21_pow(s21max_inf, s21max_inf),
                       pow(s21max_inf, s21max_inf));
  ck_assert_ldouble_eq_tol(s21_pow(s21max_inf, s21min_inf),
                           pow(s21max_inf, s21min_inf), 1e-8);
  ck_assert_ldouble_nan(s21_pow(s21max_inf, s21nan));

  ck_assert_ldouble_nan(s21_pow(s21nan, s21max_inf));
  ck_assert_ldouble_nan(s21_pow(s21nan, s21min_inf));
  ck_assert_ldouble_nan(s21_pow(s21nan, s21nan));

  ck_assert_ldouble_infinite(s21_pow(s21max_inf, 2.4));
  ck_assert_ldouble_infinite(s21_pow(s21min_inf, 2.4));
  ck_assert_ldouble_nan(s21_pow(s21nan, 2.4));
  ck_assert_ldouble_infinite(s21_pow(2.4, s21max_inf));
  ck_assert_ldouble_eq_tol(s21_pow(2.4, s21min_inf), pow(2.4, s21min_inf),
                           1e-8);
  ck_assert_ldouble_nan(s21_pow(2.4, s21nan));

  ck_assert_ldouble_eq_tol(s21_pow(-0, 2.4), pow(-0, 2.4), 1e-8);
  ck_assert_ldouble_eq_tol(s21_pow(-0, 0.5), pow(-0, 0.5), 1e-8);
  ck_assert_ldouble_eq_tol(s21_pow(0, 2.4), pow(0, 2.4), 1e-8);
  ck_assert_ldouble_eq_tol(s21_pow(-0, 2.4), pow(-0, 2.4), 1e-8);
  ck_assert_ldouble_eq_tol(s21_pow(2.4, 0), pow(2.4, 0), 1e-8);
  ck_assert_ldouble_eq_tol(s21_pow(2.4, -0), pow(2.4, -0), 1e-7);
  ck_assert_ldouble_eq_tol(s21_pow(2.4, 0.5), pow(2.4, 0.5), 1e-7);
  ck_assert_ldouble_eq_tol(s21_pow(2.4, -0.5), pow(2.4, -0.5), 1e-8);
  ck_assert_ldouble_nan(s21_pow(-2.4, 0.5));
  ck_assert_ldouble_nan(s21_pow(-2.4, -0.5));
  ck_assert_ldouble_nan(s21_pow(-2.4, 2.1));
  ck_assert_ldouble_nan(s21_pow(-2.4, -2.1));
  ck_assert_ldouble_eq_tol(s21_pow(-2.4, 2), pow(-2.4, 2), 1e-5);
  ck_assert_ldouble_eq_tol(s21_pow(2.4, 2), pow(2.4, 2), 1e-5);
  ck_assert_ldouble_eq_tol(s21_pow(-2.4, -1), pow(-2.4, -1), 1e-8);
  ck_assert_ldouble_nan(s21_pow(-2.4, -1.2));
  ck_assert_ldouble_nan(s21_pow(-2.4, -0.4));
  ck_assert_ldouble_eq_tol(s21_pow(2.4, 1), pow(2.4, 1), 1e-7);
  ck_assert_ldouble_eq_tol(s21_pow(2.4, 3), pow(2.4, 3), 1e-5);
  ck_assert_ldouble_eq_tol(s21_pow(2.4, -3), pow(2.4, -3), 1e-8);
  ck_assert_ldouble_eq_tol(s21_pow(666666.4, -1.5), pow(666666.4, -1.5), 1e-8);
  ck_assert_ldouble_eq_tol(s21_pow(3.3, -24.2), pow(3.3, -24.2), 1e-8);
  ck_assert_ldouble_nan(s21_pow(-3.3, -24.2));
  ck_assert_ldouble_eq_tol(s21_pow(0.0000000005543, 24.2),
                           pow(0.0000000005543, 24.2), 1e-7);
  ck_assert_ldouble_eq_tol(s21_pow(0.0000000005543, 0.00000003),
                           pow(0.0000000005543, 0.00000003), 1e-7);
}
END_TEST

START_TEST(fmod_test) {
  ck_assert_ldouble_nan(s21_fmod(s21max_inf, s21max_inf));
  ck_assert_ldouble_nan(s21_fmod(s21max_inf, s21min_inf));
  ck_assert_ldouble_nan(s21_fmod(s21max_inf, s21nan));
  ck_assert_ldouble_nan(s21_fmod(s21min_inf, s21max_inf));
  ck_assert_ldouble_nan(s21_fmod(s21min_inf, s21min_inf));
  ck_assert_ldouble_nan(s21_fmod(s21min_inf, s21nan));
  ck_assert_ldouble_nan(s21_fmod(s21nan, s21max_inf));
  ck_assert_ldouble_nan(s21_fmod(s21nan, s21min_inf));
  ck_assert_ldouble_nan(s21_fmod(s21nan, s21nan));
  ck_assert_ldouble_nan(s21_fmod(s21nan, s21max_inf));
  ck_assert_ldouble_nan(s21_fmod(s21nan, s21min_inf));
  ck_assert_ldouble_nan(s21_fmod(s21nan, s21nan));
  ck_assert_ldouble_nan(s21_fmod(s21max_inf, 2.4));
  ck_assert_ldouble_nan(s21_fmod(s21min_inf, 2.4));
  ck_assert_ldouble_nan(s21_fmod(s21nan, 2.4));
  ck_assert_ldouble_eq_tol(s21_fmod(2.4, s21max_inf), fmod(2.4, s21max_inf),
                           1e-8);
  ck_assert_ldouble_eq_tol(s21_fmod(2.4, s21min_inf), fmod(2.4, s21min_inf),
                           1e-8);
  ck_assert_ldouble_nan(s21_fmod(2.4, s21nan));
  ck_assert_ldouble_nan(s21_fmod(2.4, s21nan));
  ck_assert_ldouble_eq_tol(s21_fmod(0, 2.4), fmod(0, 2.4), 1e-15);
  ck_assert_ldouble_eq_tol(s21_fmod(-0, 2.4), fmod(-0, 2.4), 1e-15);
  ck_assert_ldouble_nan(s21_fmod(2.4, 0));
  ck_assert_ldouble_nan(s21_fmod(2.4, -0));
  ck_assert_ldouble_eq_tol(s21_fmod(2.4, 0.5), fmod(2.4, 0.5), 1e-15);
  ck_assert_ldouble_eq_tol(s21_fmod(2.4, -0.5), fmod(2.4, -0.5), 1e-15);
  ck_assert_ldouble_eq_tol(s21_fmod(-2.4, 0.5), fmod(-2.4, 0.5), 1e-16);
  ck_assert_ldouble_eq_tol(s21_fmod(-2.4, -0.5), fmod(-2.4, -0.5), 1e-15);
  ck_assert_ldouble_eq_tol(s21_fmod(666666.4, 1.5), fmod(666666.4, 1.5), 1e-15);
  ck_assert_ldouble_eq_tol(s21_fmod(666666.4, -1.5), fmod(666666.4, -1.5),
                           1e-15);
  ck_assert_ldouble_eq_tol(s21_fmod(3.3, 24.2), fmod(3.3, 24.2), 1e-15);
  ck_assert_ldouble_eq_tol(s21_fmod(3.3, -24.2), fmod(3.3, -24.2), 1e-15);
  ck_assert_ldouble_eq_tol(s21_fmod(-3.3, -24.2), fmod(-3.3, -24.2), 1e-15);
  ck_assert_ldouble_eq_tol(s21_fmod(0.0000000005543, 24.2),
                           fmod(0.0000000005543, 24.2), 1e-15);
  ck_assert_ldouble_eq_tol(s21_fmod(0.0000000005543, 0.000003),
                           fmod(0.0000000005543, 0.000003), 1e-15);
}
END_TEST

START_TEST(ceil_test) {
  ck_assert_ldouble_eq(s21_ceil(s21max_inf), ceil(s21max_inf));
  ck_assert_ldouble_eq(s21_ceil(s21min_inf), ceil(s21min_inf));
  ck_assert_ldouble_nan(s21_ceil(s21nan));
  ck_assert_ldouble_eq(s21_ceil(-876554310.23455), ceil(-876554310.23455));
  ck_assert_ldouble_eq(s21_ceil(876554310.23455), ceil(876554310.23455));
  ck_assert_ldouble_eq(s21_ceil(-0.45), ceil(-0.45));
  ck_assert_ldouble_eq(s21_ceil(0.45), ceil(0.45));
  ck_assert_ldouble_eq(s21_ceil(-0.00000000000000045),
                       ceil(-0.00000000000000045));
}
END_TEST

START_TEST(floor_test) {
  ck_assert_ldouble_infinite(s21_floor(s21max_inf));
  ck_assert_ldouble_infinite(s21_floor(s21min_inf));
  ck_assert_ldouble_eq(s21_floor(s21max_inf), floor(s21max_inf));
  ck_assert_ldouble_eq(s21_floor(s21min_inf), floor(s21min_inf));
  ck_assert_ldouble_eq(s21_floor(0), floor(0));
  ck_assert_ldouble_eq(s21_floor(-0), floor(-0));
  ck_assert_ldouble_eq(s21_floor(-876554310.23455), floor(-876554310.23455));
  ck_assert_ldouble_eq(s21_floor(876554310.23455), floor(876554310.23455));
  ck_assert_ldouble_eq(s21_floor(-0.45), floor(-0.45));
  ck_assert_ldouble_eq(s21_floor(0.45), floor(0.45));
  ck_assert_ldouble_eq(s21_floor(-0.0000000000000000000045),
                       floor(-0.0000000000000000000045));
}
END_TEST

START_TEST(abs_test) {
  int inf_max = 1.0 / 0.0;
  int inf_min = -1.0 / 0.0;
  int s21_nan = 0.0 / 0.0;

  ck_assert_int_eq(s21_abs(inf_max), abs(inf_max));
  ck_assert_int_eq(s21_abs(inf_min), abs(inf_min));
  ck_assert_int_eq(s21_abs(s21_nan), abs(s21_nan));
  ck_assert_int_eq(s21_abs(s21_nan), abs(s21_nan));
  ck_assert_int_eq(s21_abs(-10), abs(-10));
  ck_assert_int_eq(s21_abs(-0), abs(-0));
}
END_TEST

START_TEST(fabs_test) {
  ck_assert_ldouble_infinite(s21_fabs(s21min_inf));
  ck_assert_ldouble_infinite(s21_fabs(s21max_inf));
  ck_assert_ldouble_nan(s21_fabs(s21nan));
  ck_assert_ldouble_eq_tol(s21_fabs(0.5), fabs(0.5), 1e-15);
  ck_assert_ldouble_eq_tol(s21_fabs(-0.5), fabs(-0.5), 1e-15);
  ck_assert_ldouble_eq_tol(s21_fabs(-1.0), fabs(-1.0), 1e-15);
  ck_assert_ldouble_eq_tol(s21_fabs(1.0), fabs(1.0), 1e-15);
  ck_assert_ldouble_eq_tol(s21_fabs(1.1), fabs(1.1), 1e-15);
  ck_assert_ldouble_eq_tol(s21_fabs(-2.1), fabs(-2.1), 1e-15);
  ck_assert_ldouble_eq_tol(s21_fabs(0.0), fabs(0.0), 1e-15);
  ck_assert_ldouble_eq_tol(s21_fabs(-0.0), fabs(-0.0), 1e-15);
  ck_assert_ldouble_eq_tol(s21_fabs(5.123456789123), fabs(5.123456789123),
                           1e-15);
  ck_assert_ldouble_eq_tol(s21_fabs(0.00000004564897), fabs(0.00000004564897),
                           1e-15);
  ck_assert_ldouble_eq_tol(s21_fabs(170000000000000.1), fabs(170000000000000.1),
                           1e-15);
  ck_assert_ldouble_eq_tol(s21_fabs(-5.123456789123), fabs(-5.123456789123),
                           1e-15);
  ck_assert_ldouble_eq_tol(s21_fabs(-0.00000004564897), fabs(-0.00000004564897),
                           1e-15);
  ck_assert_ldouble_eq_tol(s21_fabs(-170000000000000.1),
                           fabs(-170000000000000.1), 1e-15);
}
END_TEST

int main(void) {
  Suite *suite =
      suite_create("UNITS");  // test suite - это набор тестовых случаев
  TCase *tcase =
      tcase_create("TESTS");  // test case — это набор тестовых примеров
  SRunner *srunner = srunner_create(
      suite);  // Suite runner - это функция, которая берет набор тестов
               // и запускает все тестовые случаи и их тестовые функции
  int val = 0;

  suite_add_tcase(suite, tcase);
  tcase_add_test(tcase, sin_test);
  tcase_add_test(tcase, cos_test);
  tcase_add_test(tcase, tan_test);
  tcase_add_test(tcase, asin_test);
  tcase_add_test(tcase, acos_test);
  tcase_add_test(tcase, atan_test);
  tcase_add_test(tcase, exp_test);
  tcase_add_test(tcase, log_test);
  tcase_add_test(tcase, sqrt_test);
  tcase_add_test(tcase, pow_test);
  tcase_add_test(tcase, fmod_test);
  tcase_add_test(tcase, ceil_test);
  tcase_add_test(tcase, floor_test);
  tcase_add_test(tcase, abs_test);
  tcase_add_test(tcase, fabs_test);

  // Запуск всех наборов тестов (suite - набор). CK_NORMAL - что бы выводить
  // только неудачные тесты.
  srunner_run_all(srunner, CK_NORMAL);
  // Количество проваленных тестов.
  val = srunner_ntests_failed(srunner);
  // Освобождаем память срунеру, при этом suite и tcase освобождать почему то не
  // нужно
  srunner_free(srunner);
  return val == 0 ? 0 : 1;
}
