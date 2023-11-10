#include <stdio.h>
#define MAX_INPUT 1000000

int main(void){
    int number, n;
    long long g[MAX_INPUT+1] = {0};

    for(int i=1; i <= MAX_INPUT; i++){
        for(int j=1; i*j <= MAX_INPUT; j++)
            g[i*j] += i;
        g[i] += g[i-1];
    }
    
    scanf("%d", &number);
    for(int i=0; i<number; i++){
        scanf("%d", &n);
        printf("%lld\n", g[n]);
    }

    return 0;
}