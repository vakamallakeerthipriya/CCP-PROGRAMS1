#include<stdio.h>
int main()
{
float num1,num2;
float *ptr1,*ptr2;
float sum,diff,mult,div;

ptr1=&num1;
ptr2=&num2;
printf("enter any two numbers:");
scanf("%f%f",ptr1,ptr2);
sum=(*ptr1)+(*ptr2);
diff=(*ptr1)-(*ptr2);
mult=(*ptr1)*(*ptr2);
div=(*ptr1)/(*ptr2);
printf("sum=%.2f\n",sum);
printf("difference=%.2f\n",diff);
printf("product=%.2f\n",mult);
printf("quotient=%.2f\n",div);
return 0;
}
