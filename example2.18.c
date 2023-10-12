#include <stdio.h>
int main(){
    int highestRainfall, currentRainfall;
    printf("Enter the highest rainfall \n");
    scanf("%d",&highestRainfall);
    printf("Enter the current rainfall \n");
    scanf("%d",&currentRainfall);
    if(currentRainfall > highestRainfall ){
       printf("Current rainfall exceeds high rainfall amount \n");
       highestRainfall = currentRainfall;
    }
    else{
        printf("Current rainfall could not exceed the high rainfall amount \n");
    }
    return 0;

}