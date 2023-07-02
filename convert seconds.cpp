#include<stdio.h>
//convert seconds into hours, minutes and seconds.
/* 1 hour = 3600 seconds
for example we have 4000 seconds
for finding hours 4000 -3600  we have 1 hour
400 seconds / 60 = 6 minutes
400 % 60 = 40 seconds */

int main(){
	int fsecond,second,hours,minutes,i;
	printf("enter seconds: ");
	scanf("%d",&fsecond);
	while (fsecond>=3600){
		fsecond-=3600;
		hours++;
		
	}
	minutes= fsecond/60;
	second= fsecond%60;
	printf("%d hours %d minutes %d seconds",hours,minutes,second);
	return 0;
	
	
	
	

	
}
