#include<stdio.h>
#include<math.h>
int main()
{
    float a, b;
    printf("Enter the first number:");
    scanf("%f", &a);
    char c, waste;
    printf("Enter the operator you want to use:");
    scanf("%c", &waste);
    scanf("%c", &c);
    printf("Enter the second number:");
    scanf("%f", &b);
    float d;
    d = fmod(a, b);

    switch (c)
    {
    case '+':
    printf("Your answer is: %.2f", a+b);
    break;
    case '-':
    printf("Your answer is: %.2f", a-b);
    break;
    case 'x':
    printf("Your answer is: %.2f", a*b);
    break;
    case '/':
    printf("Your answer is: %f", a/b);
    break;
    case '%':
    printf("Your answer is: %.1f", d);
    break;
    default:
    printf("Enter a valid operator");
    }
    return 0;
}