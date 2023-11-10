#include <stdio.h>

int main(void){
    int number, divisor;
    int min = 1000000;
    int max = -1;
    int n;
    
    scanf("%d", &number);
    for(int i=0; i<number; i++){
        scanf("%d", &divisor);
        if(divisor < min)
            min = divisor;
        if(divisor > max)
            max = divisor;
    }
    n = min * max;
    printf("%d\n", n);

    return 0;
}