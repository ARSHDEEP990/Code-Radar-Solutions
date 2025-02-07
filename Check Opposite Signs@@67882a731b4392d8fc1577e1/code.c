#include <stdio.h>
int oppsigns(int a,int b){
    return (a>0 &&b<0) || (a<0 && b>0);
}
int main(){
    int num1 , num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    if(oppsigns(num1,num2)){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}