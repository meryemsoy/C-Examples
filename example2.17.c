#include <stdio.h>
int main(){
    int v, a, t ,s, u ;
    
    printf("Enter the initial velocity (u): ");
    scanf("%d", &u);
    printf("Enter the acceleration (a): ");
    scanf("%d", &a);
    printf("Enter the time (t):  ");
    scanf("%d", &t);
    v = u + a * t;
    s = (u * t )+ (a * t *t)/2;

    printf("Final Velocity (v): %d \n", v);
    printf("Distance Traversed (s): %d \n", s);

    return 0;

}