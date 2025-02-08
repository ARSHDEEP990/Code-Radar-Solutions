#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch=='R'){
        printf("Stop");
    }
    if(ch=='G'){
        printf("Go");
    }
    if(ch=='Y'){
        printf("Slow Down");
    }
    if(ch!='R' && ch!='G' && ch!='Y' ){
        printf("Invalid input");
    }
    return 0;
}