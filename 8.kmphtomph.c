#include <stdio.h>

int main(){
    float km,mile;
    scanf("%f", &km);
    mile = km * 0.62;
    printf("%.2f km is equal to %.2f miles\n", km, mile);
    return 0;
}