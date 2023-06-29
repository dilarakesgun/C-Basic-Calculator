#include<stdio.h>
/*Arithmetic Sequence
initial term a1=?
total term n=?
n-th term an=?
an=a1+(n-1)*d
d=difference between  terms (such as a2-a1) */

int main(){
	int a1,n,an,d,i;
	int arr[50]={};
	printf("please enter your first term:");
	scanf("%d",&a1);
	printf("enter your total term n=");
	scanf("%d",&n);
	printf("enter an amount of increase or decrease between terms");
	scanf("%d",&d);
	for(i=1;i<=n;i++){
		an= a1 + (i-1) * d;
		printf("a%d = %d\n",i,an);
		arr[i-1]=an;
	}
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
	
}
