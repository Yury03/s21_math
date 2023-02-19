#ifndef S21_MATH_H_
#define S21_MATH_H_

#include <stdbool.h>
#include <stdlib.h>

#include "stdio.h"
#define PI_6 M_PI_2 / 3
#define PI_56 M_PI_2 * 5
#define PI_3 M_PI / 3
#define S21_M_PI 3.14159265358979323846264338327950288    /* pi             */
#define S21_M_PI_2 1.57079632679489661923132169163975144  /* pi/2           */
#define S21_M_PI_4 0.785398163397448309615660845819875721 /* pi/4           */

#define s21max_inf 1.0 / 0.0
#define s21min_inf -1.0 / 0.0
#define s21nan 0.0 / 0.0
#define s21min_exp 1e-8
#define e 2.7182818284590452353602874

int s21_abs(int x);  // вычисляет абсолютное значение целого числа
long double s21_acos(double x);  // вычисляет арккосинус
long double s21_asin(double x);  // вычисляет арксинус

long double s21_atan(double x);  // вычисляет арктангенс
long double s21_ceil(double x);  // возвращает ближайшее целое число, не меньшее
                                 // заданного значения
long double s21_cos(double x);   // вычисляет косинус

long double s21_exp(
    double x);  // возвращает значение e, возведенное в заданную степень
long double s21_fabs(
    double x);  // вычисляет абсолютное значение числа с плавающей точкой
long double s21_floor(double x);  // возвращает ближайшее целое число, не
// превышающее заданное значение

long double s21_fmod(double x,
                     double y);  // остаток операции деления с плавающей точкой
long double s21_log(double x);  // вычисляет натуральный логарифм
long double s21_pow(double base,
                    double deg);  // возводит число в заданную степень

long double s21_sin(double x);  // вычисляет синус
long double s21_sqrt(double x);  // вычисляет квадратный корень
long double s21_tan(double x);  // вычисляет тангенс
#endif
