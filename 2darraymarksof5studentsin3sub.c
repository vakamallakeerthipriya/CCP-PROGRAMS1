#include<stdio.h>
int main()
{
int marks[5][3],m,n,max_marks;
for(m=0;m<5;m++)
{
for(n=0;n<3;n++)
{
printf("enter the marks obtained by student-%d in subject-%d:",m+1,n+1);
scanf("%d",&marks[m][n]);
}
}
for(n=0;n<3;n++)
{
max_marks=marks[0][n];
for(m=1;m<5;m++)
{
if(marks[m][n]>max_marks)
max_marks=marks[m][n];
}
printf("maximum marks in subject-%d is %d\n",n+1,max_marks);
}
return 0;
}
