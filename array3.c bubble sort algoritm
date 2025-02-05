#include<stdio.h>
int main(){
   int n,i;
   printf("enter the no of  elements:");
   scanf("%d",&n);
   int numbers[n];
   printf("enter the %d elements",n);
   for(i=0;i<n;i++){
      scanf("%d",&numbers[i]);
   }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(numbers[j]>numbers[j+1]){
              int temp=numbers[j];
              numbers[j]=numbers[j+1];
              numbers[j+1]=temp;
            }
        }
    }
    printf("\n the sorted array:\t");
    for(int i=0;i<n;i++){
        printf("%d\t",numbers[i]);
    }
    return 0;
}
