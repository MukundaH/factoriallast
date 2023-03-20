#include <stdio.h>

int main() {
    int n, dig=1;
    printf("Please enter the number whose factorials last non zero digit is to be found: ");
    scanf("%d",&n);
    for(int i=2; i<n+1; i++){
        dig=dig*i;
        while(dig%10==0){
            dig=dig/10;
        }
        dig=dig%100;
    }
    printf("%d",dig%10);
    return 0;
}