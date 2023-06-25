#include<stdio.h>
int main(){
/*	
   *         *
    *       *
     *     *
      *   *
       * *
        *
       * *
      *   *
     *     *
    *       *
   *         *
   */


   int star,space,length,fspace,a;
   printf("enter a length:");
   scanf("%d",&length);
   if(length%2==0){
    printf("please enter an odd number");

   }
   else{
    space=length-4;
    star=1;
    printf("*");
    for(a=0;a<length-2;a++){
        printf(" ");
    }
    printf("*\n");

    if(length%2==1){
        for(;star<(length/2);star++){
            for(fspace=0;fspace<star;fspace++){
                printf(" ");
            }
            printf("*");

            for(a=0;a<space;a++){
                printf(" ");
            }
            space-=2;

            printf("*\n");

   }
    for(a=0;a<star;a++){
                    printf(" ");
                }
                printf("*\n");

    }
    int b=1;
    space=length-4;
    for(star=(length/2)-1;star>0;star--){
        for(fspace=0;fspace<star;fspace++){
            printf(" ");
        }
        printf("*");
        if(b<=space){
            for(a=0;a<b;a++){
            printf(" ");
        }
        b+=2;
        printf("*\n");
        }

    }
    printf("*");
    for(a=0;a<length-2;a++){
        printf(" ");
    }
    printf("*");
   }




}
