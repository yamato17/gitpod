#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main(void){
    double *data;
    int n;
    double ave;
    int i;
    printf("How many?:");
    scanf("%d",&n);
     data=(double *)malloc(sizeof(double)*n);
    for(i=0;i<n;i++){
        scanf("%lf",&data[i]);
    }
    
    for(i=0;i<n;i++){
        ave=ave+data[i];
    }
    ave=ave/n;
    printf("The average number is %5.3f.\n", ave);
    free(data);
    return 0;

}

