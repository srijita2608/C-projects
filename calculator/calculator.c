/*
Simple Calculator in C
Supports: +, -, *, /, ^, %
Includes error handling for invalid input, division/modulo by zero and invalid powers.
*/

#include <stdio.h>
#include <math.h>
#include <strings.h>
int main(){
    double operand1, operand2;
    char operator;
    char choice[10]="yes";
    double ans=0;

    printf("=====CALCULATOR=====");
    printf("\n+ Addition\n- Subtraction\n* Multiplication\n/ Division\n^ Power\n%% Modulo\n");
    do{
        int valid=1;

        printf("\nEnter 1st operand: ");
        if(scanf("%lf",&operand1)!=1){
            printf("\nInvalid number!\n");
            while(getchar()!='\n');
            continue;
        }
        printf("Select an operator: ");
        scanf(" %c",&operator);
        printf("Enter 2nd operand: ");
        if(scanf("%lf",&operand2)!=1){
            printf("\nInvalid number!\n");
            while(getchar()!='\n');
            continue;
        }

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
            if(isnan(ans) || isinf(ans)){
                printf("\nInvalid power operation!\n");
                valid=0;
            }
            break;
        case '%':
            if(operand2==0){
                printf("\nCannot perform modulo by zero!\n");
                valid=0;
            }
            else{
                ans= fmod(operand1,operand2);
            }
            break;
        default:
            printf("\nInvalid operator! Please try again.\n");
            valid=0;
            break;
        }

        if (valid){
            printf("\nAns: %g %c %g = %g", operand1, operator, operand2, ans);
        }

        printf("\n\nDo you want to calculate again? \n");
        scanf("%9s", choice);

    } while(strcasecmp(choice, "yes") == 0);

    printf("\nCalculator closed.\n");

    return 0;
}