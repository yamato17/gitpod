#include <stdio.h>
int mymax(int data[10]){
    int minimum;
    int i;
    minimum=data[0];
    for(i=1;i<10;i++){
        if(data[i]>minimum){
            minimum=data[i];
        }
    }
    return minimum;
}
int main(void){
     int data[] = {41, 69, 28, 33, 23, 7, 52, 13, 55, 9};
     int ans;
     ans=mymax(data);
     printf("The minimum number is %d.\n",ans);
     return 0;
}