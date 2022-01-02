#include <stdio.h>
void changevalue(int* x, int* y)
{
    int sum , sub;
    sum = *x + *y;
    sub = *x - *y;
    *x = sum;
    *y = sub;
    return;
}
int main()
{
    int a = 100;
    int b = 50;
    printf("The value of a and b before calling the function are %d and %d.\n",a,b);
    changevalue(&a,&b);
    printf("The value of a and b after calling the function are %d and %d.\n",a,b);
    return 0;
}