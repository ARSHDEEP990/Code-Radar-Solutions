#include <sdtio.h>
int main(){
    int n;
    scanf("%d",&n);

    int m;
    scanf("%d",&m);

    if(n>m){
        printf("Yes");
    }
    if(n<m){
        printf("No");
    }
    if(n==m){
        printf("Equal");
    }
    return 0;
}