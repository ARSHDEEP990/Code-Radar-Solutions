#include <stdio.h>
int main(){
    char name[90];
    scanf("%c",&name);

    int age;
    scanf("%d",&age);

    char hobby[90];
    scanf("%c",&hobby);

    printf("Name: %c\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %c\n",hobby);
    return 0;
}