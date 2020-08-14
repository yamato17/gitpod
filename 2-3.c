#include <stdio.h>
#include <string.h>
#define MAXLEX 64

int main(void){
    char s1[MAXLEX]="Network";
    char s2[MAXLEX]="";
    char s3[MAXLEX]="";
    int result;
    for(int i=0;i<7;i++){
        s2[i]=s1[i];
    }
    strcpy(s3,s1);
    result=strcmp(s2,s3);
    if(result==0) printf("%s=%s\n",s2,s3);
    return 0;
}