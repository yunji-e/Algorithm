#include <stdio.h>
#include <stdlib.h>

int mod(int a, int b){
    int r = a%b;
    if(r==0) 
        return b;
    else
        return mod(b, r);
}

int main(void){
    int a, b;
    int v1, v2;

    scanf("%d %d", &a, &b);
    if(a>=b)
        v1 = mod(a, b);
    else
        v1 = mod(b, a);

    v2 = a*b/v1;

    printf("%d\n", v1);
    printf("%d\n", v2);

    return 0;
}