#include <stdio.h>
double mymin();
double mymax();
double mysum();
double mymean();
double myvar();
int main(void){
    double data[] = {21.1, 13.3, 7.7, 6.9, 5.4, 11.2, 32.8, 1.3, 9.5, 2.6};
    double min;
    double max;
    double sum;
    double mean;
    double var;
    min=mymin(data);
    max=mymax(data);
    sum=mysum(data);
    mean=mymean(data);
    var=myvar(data);
    printf("The mymin number is %lf.\n",min);
    printf("The mymax number is %lf.\n",max);
    printf("The mysum number is %lf.\n",sum);
    printf("The mymean number is %lf.\n",mean);
    printf("The myvar number is %lf.\n",var);
    return 0;
}
double mymin(double data[]){
    double mymin;
    int i;
    mymin=data[0];
    for(i=1;i<10;i++){
        if(data[i]<mymin){
            mymin=data[i];
        }
    }
    return mymin;
}

double mymax(double data[10]){
    double mymax;
    int i;
    mymax=data[0];
    for(i=1;i<10;i++){
        if(data[i]>mymax){
            mymax=data[i];
        }
    }
    return mymax;
}
double mysum(double data[]){
    double mysum=0.0;
    int i;
    for(i=0;i<10;i++){
        mysum = mysum+data[i];
    }
    return mysum;
}
double mymean(double data[]){
    double sum=0.0;
    double mymean=0.0;
    int i=10;
    sum=mysum(data);
    mymean=sum/i;

    return mymean;
}
double myvar(double data[]){
    double mean=0.0;
    double myvar=0.0;
    int i;
    mean=mymean(data);
    for(i=0;i<10;i++){
        myvar=myvar+(data[i]-mean)*(data[i]-mean);
    }

    return myvar;
}