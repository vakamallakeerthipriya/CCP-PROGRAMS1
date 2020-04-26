#include<stdio.h>
int main()
{
FILE*fp;
int x;
fp=fopen("data.txt","w");
if(fp==NULL)
{
printf("cannot open the file \n");
}
else
{
while(x=fgetc(fp)!=EOF)
{
putc(x,fp);
}
fclose(fp);
fp=fopen("data.txt","r");
while(x=fgetc(fp)!=EOF)
{
printf("%c",x);
}
}
}
