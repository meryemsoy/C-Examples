#include <stdio.h>
int main(){
    int a, b, c ;
    printf("Enter three differnet integers: ");
    scanf("%d %d %d",&a, &b, &c);
     int smallest = a;
    int largest = a;
    printf("Sum is:  %d \n", a + b + c);
    printf("Average is:  %d\n", (a + b + c) / 3);
    printf("Product is:  %d\n", a * b * c);
    if(b < smallest){
       smallest = b;
    }
    if(c < smallest){
       smallest = c ;
    }
    if(b > largest){
        largest = b;
    }
    if(c > largest){
        largest = c;
    }
    printf("Smallest is :  %d \n" , smallest);
    printf("Largest is :  %d" , largest);
    return 0;


}