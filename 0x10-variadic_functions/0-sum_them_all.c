#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of extra params
 * Return: total sum
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
va_list li;
int sum;
va_start(li, n);
for (i = 0, sum = 0; i < n; i++)
sum += va_arg(li, int);
va_end(li);
return (sum);
}
