#include<stdio.h>
int main(){
   int number1,number2,number3;
   printf(" enter number1,number2,number3");
   scanf("%d%d%d",&number1,&number2,&number3);
if(number1>number2){
   if(number1>number3){
    printf("%d is greater" ,number1);
  }else{
    printf("%d is greater",number3);
}
}
else{
    if(number2>number3){
    printf("%d is greater",number2);
    }else{
    printf("%d,is greater",number3);
    }  
   } 
    return 0;
}  
