#include <stdio.h>
#define MAX_INT 1000000

int main(void){
    int i, n;
    int decimal[MAX_INT+1] = {0};

    for(int i=2; i<=MAX_INT+1; i++)
        for(int j=1; i*j<=MAX_INT+1; j++)
            decimal[i*j] += 1;

    while(1){
        int flag = 0;

        scanf("%d", &n);
        if(n==0) break;

        for(i=3; i<=n/2; i+=2)
            if(decimal[i]==1&&decimal[n-i]==1){
                flag = 1;
                break;
            }
        
        if(flag == 1)
            printf("%d = %d + %d\n", n, i, n-i);
        else
            printf("Goldbach's conjecture is wrong.\n");
    }

    return 0;
}