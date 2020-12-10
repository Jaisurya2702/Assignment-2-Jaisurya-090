#include <stdio.h>

int main(void)
{
    int x, y, i, j, sum;
    printf("Enter your range (x to y): \n");
    scanf("%d %d", &x, &y);
    printf("List of prime numbers : \n");
    for (i=x; i<=y; i++){
        sum=0;
        for (j=2; j<i; j++){
            if (i%j==0)
                sum+=1;
        }
        if (sum==0)
            printf("%d ", i);
    }
}
