#include<stdio.h>
int main(){
   int n, i,maximum,minimum,positionMax=1,positionMin=1;
   printf("enter the no of elements");
   scanf("%d",&n);
   int number[n];
   printf("enter the elements");
   for(i=0;i<n;i++){
       scanf("%d",&number[i]);
    }
    maximum=number[0];
    minimum=number[0];
    for(i=0;i<n;i++){
      if(number[i]>maximum){
         maximum=number[i];
         positionMax=i+1;   
      }
      if(number[i]<minimum){
        minimum=number[i];
        positionMin=i+1;
      }
  }                    
  printf("\n the largest no is %d in the position %d",maximum,positionMax);
  printf("\n the smallest no is %d in the position %d",minimum,positionMin);
  return 0;
}
  
  
       
   
   
   
   


