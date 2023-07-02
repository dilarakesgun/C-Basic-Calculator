#include<stdio.h>
//Removing decimal part from an integer

int main(){
	float num;
	int temp;
	printf(" enter a float num:");
	scanf("%f",&num);
	temp= (int) num;
	num-=temp;
	printf("%.3f",num);
}
