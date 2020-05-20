#include <stdio.h>

int main(void){
    int a;
    scanf("%d",&a);
    
    if(a%4==0){
        if(a%100==0){
            if(a%400==0){
                printf("%dはうるう年である.", a);
            }else{
                printf("%dはうるう年ではない.", a);
            }
        }else{
            printf("%dはうるう年である.", a);
        }
    }else{
        printf("%dはうるう年ではない.", a);
    }
    
    return 0;
}