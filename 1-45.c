#include <stdio.h>
double myvar(double data[]){
    double sum=0.0;
    double mean=0.0;
    double myvar=0.0;
    int i;
    for(i=0;i<10;i++){
        sum= sum+data[i];
    }

    mean=sum/i;
    for(i=0;i<10;i++){
        myvar=myvar+(data[i]-mean)*(data[i]-mean);
    }

    return myvar;
}

int main(void){
    double data[] = {21.1, 13.3, 7.7, 6.9, 5.4, 11.2, 32.8, 1.3, 9.5, 2.6};
    double var;
    var=myvar(data);
    printf("The myvar number is %lf.\n",var);
    return 0;
}