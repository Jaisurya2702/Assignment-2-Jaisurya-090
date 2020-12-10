#include <stdio.h>
#define B 10

int main(void)
{
    long long int x, temp;
    int i, freq[B], Last_Dig;
    printf("Enter your number : ");
    scanf("%lld", &x);
    temp=x;
    for (i=0; i<B; i++){
        freq[i]=0;
    }
    while (x>0){
        Last_Dig=x%10;
        x/=10;
        freq[Last_Dig]++;
    }
    for (i=0; i<B; i++){
        printf("\nFrequency of %d : %d\n", i, freq[i]);
    }
}
