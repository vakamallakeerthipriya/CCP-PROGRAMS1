#include <stdio.h>
#include<conio.h>

void swap(int*num1,int*num2);
int main()
{
int x,y;

printf("\nenter first number: ");
scanf("%d",&x);
printf("\nenter second number:");
scanf("%d",&y);
printf("\nbefore swapping x=%d and y=%d",x,y);
swap(&x,&y);
printf("\nAfter swapping x=%d and y=%d",x,y);
getch();
}
void swap(int*num1,int*num2)
{
int temp;
temp=*num1;
*num1=*num2;
*num2=temp;
}
