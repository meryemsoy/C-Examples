#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int main(){
    srand(time(NULL));
    int rastgeleSayi = rand() % 1000 + 1; 
    int tahmin;
    int deneme=0;
    while (1)
    {
    printf("Tahmininizi girinin \n" );
    scanf("%d",&tahmin);
    if(rastgeleSayi == tahmin){
        printf("Dogru tahmin yaptiniz \n");
        break;
    }
    else{
        printf("Yanlis tahmin yaptiniz \n");

    }
        
    }
    
    return 0;
}