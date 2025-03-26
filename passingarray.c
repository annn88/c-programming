#include<stdio.h>
int sumArray(int[],int);
int main(){
 int limit,sum;
 printf("enter the limit");
 scanf("%d",&limit);
 int array[limit];
 sum=sumArray(array,limit);
 printf("%d",sum);
 return 0;
 }
 int sumArray(int array[],int limit){
 int sum=0;
 printf("enter elements:");
 for(int i=0;i<limit;i++){
    scanf("%d",&array[i]);
 }
 for(int i=0;i<limit;i++){
 sum=sum+array[i];
 }
 return sum;
 }
 
