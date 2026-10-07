# include <stdio.h>
int main(){
    int monthnum, a, j, i=1, h, b;
    printf("\n\nEnter the month number of year 2027: ");
    scanf("%d",&monthnum);

    switch(monthnum){
        case 1:
        a=6;
        j=31;
        break;
        case 2:
        a=2;
        j=28;
        break;
        case 3:
        a=2;
        j=31;
        break;
        case 4:
        a=5;
        j=30;
        break;
        case 5:
        a=7;
        j=31;
        break;
        case 6:
        a=3;
        j=30;
        break;
        case 7:
        a=5;
        j=31;
        break;
        case 8:
        a=1;
        j=31;
        break;
        case 9:
        a=4;
        j=30;
        break;
        case 10:
        a=6;
        j=31;
        break;
        case 11:
        a=2;
        j=30;
        break;
        case 12:
        a=4;
        j=31;
        break;
        default:
        printf("\n Invalid month!\n");
    }
    printf("\n\n");
    printf("\t\t\t Month: %d 2027\n\n", monthnum);
    printf("        SUN    MON     TUE     WED     THU     FRI     SAT    \n\n");
    switch(a){
        case 1:
        printf("\t%d",i);
        break;
        case 2:
        printf("\t\t%d",i);
        break;
        case 3:
        printf("\t\t\t%d",i);
        break;
        case 4:
        printf("\t\t\t\t%d",i);
        break;
        case 5:
        printf("\t\t\t\t\t%d",i);
        break;
        case 6:
        printf("\t\t\t\t\t\t%d",i);
        break;
        case 7:
        printf("\t\t\t\t\t\t\t%d",i);
        break;
    }
    h=8-a;
    for(i=2;i<=h;i++){
        printf("\t%d",i);
    }
    printf("\n");
    b=0;
    for(i=h+1;i<=j;i++){
        if(b==7){
            printf("\n");
            b=0;
        }
        printf("\t%d",i);
        b++;
    }
    printf("\n\n");
    return 0;
}