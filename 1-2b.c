#include <stdio.h>

int main(void){
    int i;
    int ans;

    ans=0;
    for(i=1;i<=100;i++){
        ans += i;
    }
    printf("The answer is %d.\n",ans);

    return 0;
}