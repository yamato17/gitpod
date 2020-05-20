#include <stdio.h>
int  main(void){
    int data[] = {41, 69, 28, 33, 23, 7, 52, 13, 55, 9};
    int minimum;
    int i;
    minimum = data[0];
    for(i=1; i<10; i++){
        if(data[i] < minimum){
            minimum=data[i];
        }
    }
    printf("THE minimum number is %d.\n", minimum);
    
    return 0;
}