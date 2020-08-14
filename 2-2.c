#include <stdio.h>
#define MAXLEN 128

int main(void){
    FILE *fp;
    int count;
    int ch;
    char data[MAXLEN];
    fp=fopen("2-2re.txt","r");
    if(fp == NULL){
        printf("Cannot open file:2-2re.txt\n");
        return -1;
    }
    while(1){
        ch=fgetc(fp);
        if(ch==EOF) break;
        count=count+1;
    }
    fprintf(fp, data, stdout);
    printf("%d",count);

    fclose(fp);
    return 0;
}