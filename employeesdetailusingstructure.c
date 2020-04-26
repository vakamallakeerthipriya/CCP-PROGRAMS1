#include<stdio.h>
struct employee
{
char name[30];
int empId;
float salary;
};
int main()
{
struct employee emp;
printf("\n enter details :\n");
printf("name?:");       gets(emp.name);
printf("Id?:");         scanf("%d",&emp.empId);
printf("salary?:");     scanf("%f",&emp.salary);
printf("\n entered detail is:");
printf("name: %s" ,emp.name);
printf("Id: %d" ,emp.empId);
printf("salary: %f\n",emp.salary);
return 0;
}
