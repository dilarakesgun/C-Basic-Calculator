#include<stdio.h>

int main(){
	float first_num,num1,num2,sum;
	int calculate;
	printf("Enter first number: ");
	scanf("%f",&first_num);
	printf("enter second number: ");
	scanf("%f",&num1);
	printf("For + enter 1, for - enter 2 , for * enter 3 ,for / enter 4 ");
	scanf("%d",&calculate);
	if(calculate==1) sum=first_num + num1;
	else if (calculate==2) sum=first_num - num1;
	else if (calculate==3) sum= first_num * num1;
	else if (calculate==4) sum= first_num / num1;
	
	

	
	while(!(calculate==5)){
		printf("For + enter 1 ,for - enter 2, for * enter 3 , for / enter 4 ,  for exit enter 5 ");
		scanf("%d",&calculate);
		if(calculate==5) break;
		printf("enter your number:");
		scanf("%f",&num2);
		switch (calculate){
			case 1:
				sum+=num2;
				break;
			case 2:
				sum-=num2;
				break;
			case 3:
				sum*=num2;
				break;
			case 4:
				sum/=num2;
				break;
			
		
			
		}
		
	
	}
	if(calculate==5) printf("result is : %f",sum);
	
	
	
	
	
}
