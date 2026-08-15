#include <stdio.h>

int main(){
    int i,a,b,c,f,j;
    printf("Enter a number: ");
    scanf("%d",&f);

    a=0;
    b=1;
    for(i = 1; i<=f; i++){
        
        c= a+b;
        for(j=b+1; j<c && j<=f; j++){
            printf("%d\t",j);
        }
        a=b;
        b=c;
        if(b>f)
        break;
    }

return 0;
}