#include <stdio.h>

int main() {
    float taka,discount;
    scanf("%f %f",&taka,&discount);
    float main_taka=((discount*100)/(100-taka));
    printf("%.2f ",main_taka);
   return 0;
} 