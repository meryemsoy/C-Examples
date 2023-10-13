#include <stdio.h>
int main(){
    int num1;
    printf("Enter the integers: ");
    scanf("%d", &num1);
    if(num1%2 ==0 ){
        printf("This number is even \n" );
    }
    if(num1%2 !=0 ){
        printf("This number is odd \n" );
    }    
    return 0;
}