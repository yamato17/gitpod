/* unsigned_check.c */
#include <stdio.h>
int main(void)
{
signed char a; /* signed charの変数aを定義 */
unsigned char b; /* unsigned charの変数bを定義 */
unsigned short c;
signed short d;
int i;
for( i=0 ; i < 65536 ; i++ ){ /* 0〜255の値をa, bに代入し，出力する */
a = i;
b = i;
c = i;
d = i;
printf("i=%d: a=%d, b=%d, c=%d, d=%d\n", i, a, b, c, d);
}
return 0;
}