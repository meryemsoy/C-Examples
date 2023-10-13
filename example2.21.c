#include <stdio.h>
#include <math.h>
int main(){
    int side = 9 ;
    for(int i=1; i<=side; i++){
        for(int j=1; j<=side; j++){
            if(i==1 || i== side || j==1 || j==side){
            printf("*");
            }
            else{
                printf(" ");

            }
        }
        printf("\n");

        
    }
    int yaricap = 5;
    int x, y;

    for (y = yaricap; y >= -yaricap; y--) {
        for (x = -yaricap; x <= yaricap; x++) {
            double uzaklik = sqrt(x * x + y * y);
            if (uzaklik >= yaricap - 0.5 && uzaklik <= yaricap + 0.5) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    int i,j,n=3;
   for (i = 1; i <= n; i++) {
        // Boşlukları yazdır
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Yıldızları yazdır
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= n; j++) {
            if (j == n / 2 + 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    int m = 5;  // Elmasın boyutunu ayarlamak için bu değeri değiştirin
    int bosluk = m - 1;
    
    for (int i = 1; i <=m; i++) {
        for (int j = 0; j < bosluk; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
        bosluk--;
    }
    
    bosluk = 1;
    
    for (int i = 1; i <= m - 1; i++) {
        for (int j = 0; j < bosluk; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * (m - i) - 1; j++) {
            printf("*");
        }
        printf("\n");
        bosluk++;
    }

    
    
    return 0;


}