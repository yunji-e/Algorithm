#include <stdio.h>
#define MAX_INT 1000000

int main(void){
    int m, n;
    int decimal[MAX_INT+1] = {0};

    scanf("%d %d", &m, &n);

    for(int i=2; i<=n; i++)
        for(int j=1; i*j<=n; j++)
            decimal[i*j] += 1;

    for(int i=m; i<=n; i++)
        if(decimal[i]==1)
            printf("%d\n", i);

    return 0;
}
