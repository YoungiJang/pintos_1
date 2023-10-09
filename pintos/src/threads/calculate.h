#include <stdint.h>
#define F 1<<14
int int_fp(int n);
int fp_int_zero(int x);
int fp_int_round(int x);
int add_fp_fp(int x, int  y);
int subtract_fp_fp(int x, int y);
int add_int_fp(int x, int n);
int subtract_int_fp(int x, int n);
int multiply_fp(int x, int y);
int multiply_int(int x, int n);
int divide_fp(int x, int y);
int divide_int(int x, int n);

int int_fp(int n)
{
    return n * F;
}

int fp_int_zero(int x)
{
    return x / F;
}

int fp_int_round(int x) {
    if (x >= 0)
    {
        return (x + F / 2) / F;
    }
    else
    {
        return (x - F / 2) / F;
    }
}


int add_fp_fp(int x, int  y) {
    return x + y;
}

int subtract_fp_fp(int x, int y)
{

    return x - y;
}

int add_int_fp(int x, int n)
{
    return x + n * F;
}

int subtract_int_fp(int x, int n)
{
    return x - n * F;
}

int multiply_fp(int x, int y)
{
    return ((int64_t)x) * y / F;
}

int multiply_int(int x, int n)
{
    return x * n;
}

int divide_fp(int x, int y)
{
    return ((int64_t)x) * F / y;
}

int divide_int(int x, int n)
{
    return x / n;
}
