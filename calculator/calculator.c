/*
Simple Calculator in C
Supports: +, -, *, /, ^, %
Includes error handling for division/modulo by zero.
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
    float oparant1, oparant2;
    char oparator;
    char choice[10];
    float ans;

    printf("=====CALCULATOR=====");
    printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Power\n6. Modulo\n");
    do{
        int valid=1;

        printf("\nEnter 1st operant: ");
        scanf("%f",&oparant1);
        printf("Select an operator: ");
        scanf("%c",&oparator);
        printf("Enter 2nd operant: ");
        scanf("%f",&oparant2);

        switch (oparator)
        {
        case '+':
            ans = oparant1+oparant2;
            break;
        case '-':
            ans = oparant1-oparant2;
            break;
        case '*':
            ans = oparant1*oparant2;
            break;
        case '/':
            if(oparant2==0){
                printf("\nCannot divide by zero!\n"); 
                valid=0;
            }
            else{
                ans= oparant1/oparant2;
            }
            break;
        case '^':
            ans= pow(oparant1,oparant2);
            break;
        case '%':
            if(oparant2==0){
                printf("\nCannot perform modulo by zero!\n");
                valid=0;
            }
            else{
                ans= (int)oparant1%(int)oparant2;
            }
            break;
        default:
            printf("\nInvalid operators! Please try again.");
            valid=0;
        }

        if (valid){
            printf("\nAns: %.2f %c %.2f = %.2f", oparant1, oparator, oparant2, ans);
        }

        printf("\n\nDo you want to calculate again? \n");
        getchar();
        fgets(choice,10,stdin);

        choice[strcspn(choice,"\n")]='\0';

    } while(strcasecmp(choice, "yes") == 0);

    printf("\nCalculator closed.");

    return 0;
}