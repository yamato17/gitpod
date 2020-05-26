#include <stdio.h>
int mysum(int data[]){
    int ans=0;
    int i;
    for(i=0;i<10;i++){
        ans = ans+data[i];
    }
    return ans;
}
int main(void){
     int data[] = {41, 69, 28, 33, 23, 7, 52, 13, 55, 9};
     int ans;
     ans=mysum(data);
     printf("The sum number is %d.\n",ans);
     return 0;
}