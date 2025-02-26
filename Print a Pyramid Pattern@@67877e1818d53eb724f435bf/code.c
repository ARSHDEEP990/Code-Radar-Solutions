#include <stdio.h>
int main(){
    int n;

    scanf("%d",&n);
    int a =1;
    int b =3;
    for(int i=1;i<=n;i++){
        for(int k=1 ;k<=b;k++){
            printf("");
            
        }
        b=b-1;
        for(int j=1;j<=a;j++){
            printf("*");
            
        }
        a=a+2;
        printf("\n");
    }
    return 0;
}