#include<stdio.h>

int main (void){
    int height;
    int lower, upper, step;

    printf("何cmから："); scanf("%d", &lower);
    printf("何cmまで："); scanf("%d", &upper);
    printf("何cmごと："); scanf("%d", &step);

    for (height = lower; height <= upper; height += step)
        printf("%dcm  %.2fkg\n", height, (height - 100) * 0.9);

    return 0;
}