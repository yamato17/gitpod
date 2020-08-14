#include <stdio.h>
#include <float.h>
struct gakusei{
    int gakuban;
    int math;
    int eng;
    float heikin;
};
int main(void){
    struct gakusei ns_2nen[3]={
        {1932777,66,73},
        {1932888,91,89},
        {1932999,38,67}
    };
    for(int i=0;i<3;i++){
        ns_2nen[i].heikin=((float)ns_2nen[i].math+(float)ns_2nen[i].eng)/2;
    }
    for(int i=0;i<3;i++){
        printf("gakuban: %d\nheikin: %4.1lf\n", ns_2nen[i].gakuban, ns_2nen[i].heikin);
    }
    return 0;


}
