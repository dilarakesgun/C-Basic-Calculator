#include<stdio.h>
//Finding a driving time

int main(){
	int distance;//KM/Hours
	int speed,minutes,remainder_minutes;
	printf("Distance and speed:");
	scanf("%d %d",&distance,&speed);
	minutes= ( distance /speed ) * 60;
	remainder_minutes= distance % speed;
	
	
	printf("Traveling time: %d hours and %d minutes ",distance/speed,remainder_minutes);
	printf("Total minutes: %d",minutes+ remainder_minutes);
	return 0;
}
