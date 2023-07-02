#include<stdio.h>
/* for example 5555
5555/10= 555 5555%10=5
555/10=55 555%10=5
55/10=5 55%10=5;
*/

int main(){
	int num,remainder,sum=0,numoften=0,i;
	int arr[50];
	printf("enter num:");
	scanf("%d",&num);
	while(num>0){
		remainder= num %10;
		num/=10;
		numoften++;
		sum+=remainder;
		arr[numoften]=remainder;
		
			
	}
	
	printf("%d\n",numoften);
	
	for(i=1;i<=numoften;i++){
		printf("%d ",arr[i]);
	}
	
	
	printf("\n");
	printf("sum of digits: %d",sum);
	return 0 ;
	
}
