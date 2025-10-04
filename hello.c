#include<stdio.h>
int main()
{
float basicSalary,da,hra,tax,totalsalary;
char name[100];
int id;
printf("\nEnter a Employee Details");
printf("\nID:");
scanf("\nd",&id);
printf("\nname:");
scanf("\nf",&name);
printf("\nBasic salary :");
scanf("\nf",&basicSalary);
printf("\nDA :");
scanf("\nf",&da);
printf("\nHRA :");
scanf("\nf",&hra);

if(basicSalary >=100000)
tax=20;
else if(basicSalary>=80000)
tax=15;
else if(basicSalary=50000)
tax=10;
else if(basicSalary>=30000)
tax=5;
else 
tax=0;

totalsalary=basicSalary+((basicSalary*(da+hra-tax))/100);

printf("\n--------------------------------Salary slip-----------------------------------");
printf("\nID :%d",id);
printf("\nNAME :%s",name);
printf("\nBasic salary :%.2f",basicSalary);
printf("\nDA (%%):%.2f",da);
printf("\nHRA (%%):%.2f",hra);
printf("\nTAX (%%):%.2f",tax);
printf("\nTOTAL SALARY :%.2f",totalsalary);
return 0;
}
//