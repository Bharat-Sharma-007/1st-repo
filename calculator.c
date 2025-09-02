#include<stdio.h>
#include<math.h>
int main()
{
    float a, b;
    printf("Enter the first number:");
    scanf("%f", &a);
    printf("Enter the second number:");
    scanf("%f", &b);
    int c;
    printf("Enter the number next to the operator you want to do\n1 = +\n2 = -\n3 = *\n4 = /\n5 = % \n");
    scanf("%d", &c);
    float d;
    d = fmod(a, b);

    switch (c)
    {
    case 1:
    printf("Your answer is: %.2f", a+b);
    break;
    case 2:
    printf("Your answer is: %.2f", a-b);
    break;
    case 3:
    printf("Your answer is: %.2f", a*b);
    break;
    case 4:
    printf("Your answer is: %.2f", a/b);
    break;
    case 5:
    printf("Your answer is: %f", d);
    break;
    default:
    printf("Enter a valid operator number");
    }
    return 0;
}