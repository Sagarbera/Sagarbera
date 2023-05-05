#include<stdio.h>
#include<conio.h>
int main()
{
	int basic_salary,gross_sal;
	float da,hra;
	printf("Enter the basic salary :");
	scanf("%d",&basic_salary);
	if(basic_salary<=10000){
		hra=(basic_salary*20)/100;
		da=(basic_salary*80)/100;
		gross_sal=da+hra+basic_salary;
	printf(" Gross salary : %d",gross_sal);
	}
	else if(basic_salary<=20000){
		hra=(basic_salary*25)/100;
		da=(basic_salary*90)/100;
		gross_sal=da+hra+basic_salary;
	printf(" Gross salary : %d",gross_sal);
	}
	else if(basic_salary>20000){
		hra=(basic_salary*30)/100;
		da=(basic_salary*95)/100;
		gross_sal=da+hra+basic_salary;
	printf(" Gross salary : %d",gross_sal);
	}
	return 0;
}
