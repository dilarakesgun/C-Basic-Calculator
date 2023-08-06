#include<stdio.h>

void print_space(int space,char ch);
void print_char(int i ,char ch);
int main(){
	int i=1,space,n;
	printf("enter n:");
	scanf("%d",&n);
	space=n/2;
	if(n%2==1){
		while(i<=n){
			print_space(space,' ');
			print_char(i,'*');
			i+=2;
			space--;
			printf("\n");
		}
	}
	
	
	}
	
void print_space(int space,char ch){
	int j=1;
	while(j<=space){
		printf("%c",ch);
		j++;
	}
}
void print_char(int i,char ch){
	int j=1;
	while(j<=i){
		printf("%c",ch);
		j++;
	}
}
