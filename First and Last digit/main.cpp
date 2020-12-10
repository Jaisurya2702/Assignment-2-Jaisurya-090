#include <stdio.h>

int main(void)
{
    int x, temp, a, b;
    printf("Enter your number : ");
    scanf("%d", &x);
    b=x%10;
    temp=x;
    while (x>10){
        x/=10;
    }
    a=x;
    printf("\nFirst digit : %d", a);
    printf("\nLast digit  : %d", b);
}
