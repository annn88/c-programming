#include<stdio.h>
int main(){
   int n,i,item;
   printf("enter the no of  elements:");
   scanf("%d",&n);
   int number[n];
   printf("enter the %d elements",n);
   for(i=0;i<n;i++){
      scanf("%d",&number[i]);
   }
    printf("enter the element to search");
    scanf("%d",&item);
    for(i=0;i<n;i++){
      if(item==number[i]){
        printf("\nthe given element found at the position:%d",i+1);
      }
    }
  return 0; 
}
