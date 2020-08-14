#include <stdio.h>
#define MAXLEN 128

int main(void){
    FILE *fp;
    int c;
    char data[MAXLEN];
    if((fp=fopen("2-1result.txt","r")) == NULL){
        printf("Cannot open file:2-1result.txt\n");
        return -1;
    }
    fprintf(fp, data, stdout);

    fclose(fp);
    return 0;
}