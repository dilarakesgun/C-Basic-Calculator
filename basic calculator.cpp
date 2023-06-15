#include<stdio.h>
#include<math.h>

double sum(double sum,double num){
	return sum+=num;
}
double substract(double sum,double num){
	return sum-=num;
}
double multiply(double sum,double num){
	return sum*=num;
}
double division(double sum,double num){
	return sum/=num;
}





int main(){
	double firstnum;
	double secondnum;
	int islem;
	double addnum;
	double tempsum=0;
	printf("enter a number:\n");
	scanf("%lf",&firstnum);
	printf("Enter your second number: \n");
	scanf("%lf",&secondnum);
	printf("enter 1 for + , 2 for - , 3 for * , 4 for / and for exiting 00\n");
	scanf("%d",&islem);
	if(islem==1){
		tempsum= sum(firstnum,secondnum);
		
	}
	else if (islem==2){
		tempsum= substract(firstnum,secondnum);
		
		
	}
	else if(islem==3){
		tempsum=multiply(firstnum,secondnum);
		
	}
	else if (islem==4){
		tempsum=division(firstnum,secondnum);
	}
	
	while(islem!=5){
		printf("enter another number or enter 00 :\n");
		scanf("%lf",&addnum);
		if(addnum==00){
			printf("%lf",tempsum);
			break;
		}
		printf("enter 1 for + , 2 for - , 3 for * , 4 for / and for exiting 00\n");
		scanf("%d",&islem);
		if(islem==1){
			tempsum=sum(tempsum,addnum);
				
		}
		else if (islem==2){
			tempsum=substract(tempsum,addnum);
		}
		else if (islem==3){
			tempsum=multiply(tempsum,addnum);
		}
		else if (islem==4){
			tempsum=division(tempsum,addnum);
		}
		else{
			printf("%lf",tempsum);
		}
		
			
		
		
	}
	
}
