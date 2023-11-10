#include <stdio.h>

int main(void){
    int n;
    long long number = 1;
    int count = 1;

    while(~scanf("%d", &n)){
        number = 1;
        count = 1;
        while(number%n != 0){
        number = (number%n)*10 + 1;
        count++;
    }
    printf("%d\n", count);
    }

    return 0;
}