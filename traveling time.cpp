#include<stdio.h>
//Finding a driving time

int main(){
	float distance;
	int speed;
	printf("Distance:");
	scanf("%f",&distance);
	printf("Speed:");
	scanf("%d",&speed);
	printf("Traveling time: %d minutes",(int)distance/speed);
	
}
