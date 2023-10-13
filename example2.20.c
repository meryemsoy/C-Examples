#include <stdio.h>
int main(){
    int total_second, hours, minute, seconds;
    printf("Enter the total time elapsed in seconds: \n");
    scanf("%d", &total_second);
    hours = total_second / 3600;
    total_second %= 3600;
    minute = total_second / 60;
    seconds= total_second % 60;
    printf("Time  in HH:MM:SS format: %d %d %d",hours, minute,seconds );
    return 0;


}