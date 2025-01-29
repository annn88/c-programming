#include<stdio.h>
int main(){
   int age1,age2,age3;
   printf(" enter ram's age,sham's age,ajay's age ");
   scanf("%d%d%d",&age1,&age2,&age3);
if(age1<age2){
   if(age1<age3){
    printf("%d  ram is youngest" ,age1);
  }else{
    printf("%d  ajay is youngest",age3);
}
}
else{
    if(age2<age3){
    printf("%d  sham is youngest",age2);
    }else{
    printf("%d, ajay is youngest",age3);
    }  
   } 
    return 0;
}  
