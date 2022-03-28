#include<stdio.h>

int main(void)
{
char P;
char N *P;

FILE *f;
f=fopen("hello.txt","r");

fgets(P,10,f);
printf("%s",N);
fclose(f);
return 0;
}