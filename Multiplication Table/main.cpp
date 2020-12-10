#include <stdio.h>

int main(void)
{
    int x, i, prod;
    printf("Enter you number : ");
    scanf("%d", &x);
    printf("\nMultiplication table for %d \n", x);
    for (i=1; i<=10; i++){
        prod=x*i;
        printf("%d x %d = %d\n", x, i, prod);
    }
}
