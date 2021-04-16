#include<stdio.h>
#include "proto.h"
int main()
{
   printf("interested playing snake game\n");
   printf("press 1 to start game\n");
   int n;
   scanf("%d",&n);
   if(n==1){
       snakegame();
   }
   else{
       printf("you entered the wrong input");
   }
   
   

