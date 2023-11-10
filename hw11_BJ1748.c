#include <stdio.h>

int main(void){
    int n;
    int count = 1;
    long long result = 0;

    scanf("%d", &n);

    for(int i=1; i<=n; i*=10, count++){
        if(i*10>=n)
            result += (n-i)*count+1;
        else
            result += 9*i*count+1;
    }
    
    printf("%lld", result);

    return 0;
}