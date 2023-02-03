#include <stdio.h>

int main(){

    char operand;
    double num1;
    double num2;

    printf("Which operand would you like to use?(+, -, *, or /))");
    scanf("%c", &operand);
    
    printf("enter the two operands");
    scanf("%lf %lf", &num1, &num2);

    //making condition for each operand
    switch (operand)
    {
    case '+':
        printf("You have chose the Sum ");
        printf("\n");
        printf("%.1lf + %.1lf = %.1lf ", num1, num2, num1 + num2);
        break;

    case '-':
        printf("You have chose the Substraction ");
        printf("\n");
        printf("%.1lf - %.1lf = %.1lf ", num1, num2, num1 - num2);
        break;

    case '*':
        printf("You have chose the Multiplication ");
        printf("\n");
        printf("%.1lf * %.1lf = %.1lf ", num1, num2, num1 * num2);
        break;    

    case '/':
        printf("You have chose the Division");
        printf("\n");
        printf("%.1lf / %.1lf = %.1lf ", num1, num2, num1 / num2);
        break;    

    default:
        printf("\n");
        printf("Please enter a valid operand between(+, -, *, or /) ");
    }

  

    return 0;
}
