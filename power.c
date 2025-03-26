#include<stdio.h>
int power(int base,int exponent){
 if(exponent==0){
    return 1;
    }
    if(exponent==1){
      return base;
   }else{
    return base*power(base,exponent-1);
        }
    }
    int main(){
    int base,exponent,result;
    printf("enter base");
    scanf("%d",&base);
    printf("enter the power");
    scanf("%d",&exponent);
    result=power(base,exponent);
    printf("the power of number is %d",result);
    return 0;
    }


