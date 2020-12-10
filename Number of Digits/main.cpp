#include <stdio.h>

int main(void)
{
    long long int x, temp;
    int n=0;
    printf("Enter your number : ");
    scanf("%lld", &x);
    temp=x;
    do{
        x=x/10;
        n++;
    }
    while (x>0);

    printf("\nNumber of digits in %lld is : %d\n", temp, n);
}
