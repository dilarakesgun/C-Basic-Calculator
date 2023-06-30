#include<stdio.h>

// Employee Salary Calculator 


int main(){
	double salary_per_hours;
	int hours_month;
	printf("enter your salary per hours:");
	scanf("%lf",&salary_per_hours);
	printf("enter total hours worked in a month:");
	scanf("%d",&hours_month);
	printf("Your total salary: %.3lf",salary_per_hours * hours_month);
}
