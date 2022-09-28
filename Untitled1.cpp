#include <stdio.h>

#define MAX 100
static int a[MAX];
static int num=0;

void perm(int i){


     if(i==num){

         for(int j=0;j<num;j++){
         	printf("%d",a[j]);
		 }
         
         printf("\n");

     }
     else{

         a[i]=0;
         perm(i+1);
         a[i]=1;
         perm(i+1);
     }
}

 

int main(){

     printf("Input a number:");
     scanf("%d",&num);
     
     perm(0);
     return 0;
}
