#include <stdio.h>
void print_fibo(int x, int y, int z);
int main()
{
    int n1=0, n2=1, terms;
    printf("Enter the number of terms : ");
    scanf("%d", &terms);
    printf("fibonacci series.....\n");
    printf("%d\t%d\t", n1, n2);
    print_fibo(n1,n2,terms);
    printf("\n");
    return 0;
}
void print_fibo(int x, int y, int z)
{
    int w;
    if (z>=3)
    {
        w = x + y;
        printf("%d\t",w);
        z = z -1;
        print_fibo(y,w,z);
    }
}