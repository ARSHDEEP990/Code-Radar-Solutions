#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    int c;
    scanf("%d",&c);

    if(a>b && a>c){
        printf("%d",a);
    }
    if(b>a&&b>c){
        printf("%d",b);
    }
    if(c>a &&c>b){
        printf("%d",c);
    
    }
    if(a==b && a==c && b==c){
        printf("%d",a);
    }
    return 0;
}