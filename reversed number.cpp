#include<stdio.h>
//Print reversed number

int main(){
	int num,remainder,sum=0;
	printf("enter a number:");
	scanf("%d",&num);
	while(num>0){
		remainder= num%10;
		printf("%d",remainder);
		sum+=remainder;
		num/=10;
		
	}
	printf("\n%d",sum);
	return 0;
}
