#include <stdio.h>

int main(void)
{
    int i, sum, n;
    printf("Enter the upper limit : ");
    scanf("%d", &n);
    sum=0;
    printf("Sum of odd numbers till %d is :", n);
    for (i=1; i<=n; i++){
        if (i%2!=0)
            sum+=i;
    }
    printf("%d", sum);
}
