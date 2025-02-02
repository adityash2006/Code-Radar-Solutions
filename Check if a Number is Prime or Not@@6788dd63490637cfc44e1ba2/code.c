#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int b=0;
    for(int i=2;i<=a/2;i++){
        if(a%i==0){b=1;}
    }
    if(a==2){printf("Prime");}
    else if(b==0){printf("Prime");}
    else{printf("Not Prime");}
    return 0;
}