#include<stdio.h>
/* 
*  i=1 n=5 j=1
**
***
****
*****
*/
/*int  main(){
	int i=1,n,j=1;
	printf("enter n:");
	scanf("%d",&n);
	while(i<=n){
		while(j<=i){
			printf("*");
			j++;
		}
		j=1;
		i++;
		printf("\n");
		
	}
	return 0;
} */



void print_line(int i ,char ch){
	int j=1;
	while(j<=i){
		printf("%c",ch);
		j++;
	}
	
}

int main(){
	const char ch='X';
	int n,i=1;
	printf("enter n:");
	scanf("%d",&n);
	while(i<=n){
		print_line(i,ch);
		i++;
		printf("\n");
	}
}
