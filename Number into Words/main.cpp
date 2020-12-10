#include <stdio.h>

int main(void)
{
    int x, y=0;
    int dig;
    printf("Enter your number :");
    scanf("%d", &x);
    while (x>0){
        y=(y*10)+(x%10);
        x=x/10;
    }
    printf("\nAlphabetically it is :\n\n");
    while (y>0){
        dig=y%10;
        switch (dig) {
        case 0 :
            printf("zero ");
            break;
        case 1 :
            printf("one ");
            break;
        case 2 :
            printf("two ");
            break;
        case 3 :
            printf("three ");
            break;
        case 4 :
            printf("four ");
            break;
        case 5 :
            printf("five ");
            break;
        case 6 :
            printf("six ");
            break;
        case 7 :
            printf("seven ");
            break;
        case 8 :
            printf("eight ");
            break;
        case 9 :
            printf("nine ");
            break;
        default :
            printf("not applicable");
            break;
        }
        y=y/10;
    }
    printf("\n");
}
