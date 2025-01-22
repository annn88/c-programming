#include<stdio.h>
int main(){
    char value;
    printf("\n enter a character in capital letter:");
    value=getchar();
    value=value+32;
    printf("lowercase letter:%c\n",value);
    
    return 0;
}



