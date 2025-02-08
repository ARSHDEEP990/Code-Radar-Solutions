#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch=='R'){
        printf("Stop");
    }
    if(ch=='G'){
        printf("Slow Down");
    }
    if(ch=='Y'){
        printf("Invalid input");
    }
    return 0;
}