#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for(int i=0;i<=a;i++){
        for(int j=0;j<=a-i;j++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("*");
        }
        for(int c=0;c<=a-i;c++){
            printf(" ");
        }printf("\n");
    }
    return 0;
}