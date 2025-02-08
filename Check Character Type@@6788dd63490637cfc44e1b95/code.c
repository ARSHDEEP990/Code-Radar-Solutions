#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);

    if(ch == 'a' || ch == 'e' || ch =='i' || ch == 'o' || ch =='u'){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
    if(ch==5){
        printf("Digit");
    }
    return 0;
}