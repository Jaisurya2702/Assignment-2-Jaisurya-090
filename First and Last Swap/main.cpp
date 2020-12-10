#include <stdio.h>
#include <math.h>

int main(void)
{
    int x, a, b, temp, count=0;
    printf("Enter your number :");
    scanf("%d", &x);
    temp=x;
    b=x%10;
    while(x>0){
        x/=10;
        count++;
    }
    a=temp/pow(10,count-1);
    x=0;
    x+=b*pow(10,count-1);
    x+=temp%int(pow(10,count-1));
    x-=b;
    x+=a;
    printf("\nThe new number : %d", x);

}
