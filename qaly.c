#include <stdio.h>
int main(){
   float num_of_periods;
   float qual_of_life;
   float years;
   float sum = 0;
   scanf("%f",&num_of_periods);
    for (int i=1; i<= num_of_periods;i++){
        scanf("%f %f", &qual_of_life, &years);
        sum += qual_of_life * years;

    }
    printf("%f", sum);
    return 0;
}