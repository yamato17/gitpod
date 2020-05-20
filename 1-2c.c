#include <stdio.h>

int sowa(int n){
    int i;
    int ans;

    ans=0;
    for(i=1;i<=n;i++){
        ans+=i;
    }
    return ans;
}

int main(void){
    int ans;
    ans=sowa(100);
    printf("The answer is %d.\n",ans);

    return 0;
}