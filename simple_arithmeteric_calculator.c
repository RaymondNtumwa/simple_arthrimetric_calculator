#include <stdio.h>
int main ()
{
    printf("THIS PROGRAM IS A SIMPLE CALCULATOR\n");
    float num_1, num_2;
    char operator;

    printf("Enter Number 1:");
    scanf("%f", &num_1);

    printf("Enter number 2:");
    scanf("%f", &num_2);

  printf("Choose a operator to use (+, -, *, / ):");
    scanf(" %c", &operator);//i left a space before the %c operator this is create a new line 

    switch (operator)// a switch function because using if and else if would be bad programming 
    {
    case '+':
        printf("Result = %.2f\n", (num_1 + num_2));
        break;
        case '-':
        printf("Result = %.2f\n", (num_1 - num_2));
        break;
        case '*':
        printf("Result = %.2f\n", (num_1 * num_2));
        break;
        case '/':
        if(num_2 != 0)
            printf("Result = %.2f\n", (num_1 / num_2));
        else
            printf("Error! Division by zero is not allowed.\n");
        break;
    
    default:
        {
            printf("Invalid output!!");
        }
        break;
    }


    return 0;
    //so yeah there you have a simple arithmetric calculator .
}
