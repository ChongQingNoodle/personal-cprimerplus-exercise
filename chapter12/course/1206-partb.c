//partb.c -- 程序的其余部分
#include <stdio.h>

extern int count;//引用声明，外部链接

static int total = 0;//静态定义，内部链接
void accumulate(int k);//原型(非必需)
void accumulate(int k)
{
    static int subtotal = 0;//静态，空链接

    if(k <= 0)
    {
        printf("loop cycle: %d\n", count);
        printf("subtotal: %d; total: %d\n", subtotal, total);
        subtotal = 0;
    }
    else
    {
        subtotal += k;
        total += k;
    }
}