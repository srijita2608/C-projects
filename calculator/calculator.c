/*
Simple Calculator in C
Supports: +, -, *, /, ^, %
Includes error handling for division/modulo by zero.
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
    float operand1, operand2;
    char operator;
    char choice[10];
    float ans;

    printf("=====CALCULATOR=====");
    printf("\n+ Addition\n- Subtraction\n* Multiplication\n/ Division\n^ Power\n%% Modulo\n");
    do{
        int valid=1;

        printf("\nEnter 1st operand: ");
        scanf("%f",&operand1);
        printf("Select an operator: ");
        scanf(" %c",&operator);
        printf("Enter 2nd operand: ");
        scanf("%f",&operand2);

        switch (operator)
        {
        case '+':
            ans = operand1+operand2;
            break;
        case '-':
            ans = operand1-operand2;
            break;
        case '*':
            ans = operand1*operand2;
            break;
        case '/':
            if(operand2==0){
                printf("\nCannot divide by zero!\n"); 
                valid=0;
            }
            else{
                ans= operand1/operand2;
            }
            break;
        case '^':
            ans= pow(operand1,operand2);
            break;
        case '%':
            if(operand2==0){
                printf("\nCannot perform modulo by zero!\n");
                valid=0;
            }
            else{
                ans= (int)operand1%(int)operand2;
            }
            break;
        default:
            printf("\nInvalid operators! Please try again.");
            valid=0;
        }

        if (valid){
            printf("\nAns: %.2f %c %.2f = %.2f", operand1, operator, operand2, ans);
        }

        printf("\n\nDo you want to calculate again? \n");
        scanf("%s", choice);

    } while(strcasecmp(choice, "yes") == 0);

    printf("\nCalculator closed.");

    return 0;
}