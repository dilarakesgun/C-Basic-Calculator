#include<stdio.h>
// we want to print a value with  power of 2, 4,6 and 8

int main(){
	int num,i,temp,j;
	printf("enter a num:");
	scanf("%d",&num);
	temp=1;
	for(i=2;i<=8;i+=2){
		for(j=1;j<=i;j++){
			temp*=num;
		}
		printf("%d\n",temp);
		temp=1;
	}
	return 0;
}
