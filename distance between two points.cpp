#include<stdio.h>
#include<math.h>
//Distance Between Two Points
/* for example x1=9 y1=3 x2=3 y2=6
normally we get 3*(5)**(1/2) but we want to print it with integer , so its approximately value 6 will be printed */
int main(){
	float x1,x2,y1,y2,distance;
	printf("enter your begin points:");
	scanf("%f %f",&x1,&y1);
	printf("enter your final points:");
	scanf("%f %f",&x2,&y2);
	distance=sqrt(((x1 - x2)*(x1 - x2))+ ((y1 - y2)*(y1-y2)));
	printf("The distance is : %.2f",distance);
}
