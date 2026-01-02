#include <stdio.h>
int main()
{
    int Fnum;
    char operator;
    int Snum;
    int result = 0;

    printf("Enter an operator (+, -, *, /)");
    scanf("%c", &operator);

    printf("Enter the first number");
    scanf("%d", &Fnum);

    printf("Enter the second number");
    scanf("%d", &Snum);

    switch (operator)
    {
        case '+':
            result = Fnum + Snum;
        break;
        case '-':
            result = Fnum - Snum;
        break;
        case '*':
            result = Fnum * Snum;
        break;
        case '/':
            if(Snum != 0)
            result = Fnum / Snum;
            else
            printf("Error: Division by zero");
            return 1;
        break;
        default:
         printf("Invalid Operator");
         return 1;
    }
    printf("result = %d", result);
    return 0;
}