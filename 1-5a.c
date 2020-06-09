#include <stdio.h>
#include <stdlib.h>
int main(void){
    double *data;
    int n;
    double ave;
    int i;
    printf("How many?:");
    scanf("%d",&n);

    data=(double *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%lf",&data[i]);
    }
    
    for(i=1;i<n;i++){
        ave=ave+data[i];
    }
    ave=ave/(n+1);
    printf("The average number is %5.2f.\n", ave);
    free(data);
    return 0;

}

//入力途中でも勝手に実行されてしまします．
//考えてもわからず，これ以上は進みませんでした．