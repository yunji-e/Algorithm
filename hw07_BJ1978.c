#include <stdio.h>
#include <stdlib.h>
#define MAX_LEN 1000

int main(void){
    int n, num;
    int count = 0;
    int decimal[MAX_LEN+1] = {0};

    scanf("%d", &n);

    for(int i=2; i<=MAX_LEN+1; i++)
        for(int j=1; i*j<=MAX_LEN+1; j++)
            decimal[i*j]+=1;

    for(int i=0; i<n; i++){
        scanf("%d", &num);
        if(decimal[num]==1)
            count++;
    }
    printf("%d\n", count);

    return 0;
}