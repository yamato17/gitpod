#include <stdio.h>
int mymin(int data[]){
    int mymin;
    int i;
    mymin=data[0];
    for(i=1;i<10;i++){
        if(data[i]<mymin){
            mymin=data[i];
        }
    }
    return mymin;
}

int mymax(int data[10]){
    int mymax;
    int i;
    mymax=data[0];
    for(i=1;i<10;i++){
        if(data[i]>mymax){
            mymax=data[i];
        }
    }
    return mymax;
}
int mysum(int data[]){
    int mysum=0;
    int i;
    for(i=0;i<10;i++){
        mysum = mysum+data[i];
    }
    return mysum;
}
int main(void){
    int data[] = {41, 69, 28, 33, 23, 7, 52, 13, 55, 9};
    int min;
    int max;
    int sum;
    min=mymin(data);
    max=mymax(data);
    sum=mysum(data);
    printf("The mymin number is %d.\n",min);
    printf("The mymax number is %d.\n",max);
    printf("The mysum number is %d.\n",sum);
    return 0;
}