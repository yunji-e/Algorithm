#include <stdio.h>
#define PERM_SIZE 10000

void reverse(int* arr, int startIndex, int lastIndex){
    int temp;
    int size = lastIndex - startIndex;
    for(int i=0; startIndex+i <= startIndex+size/2; i++){
        temp = arr[startIndex+i];
        arr[startIndex+i] = arr[lastIndex-i];
        arr[lastIndex-i] = temp;
    }

    return;
}

int main(void){
    int i, n, temp;
    int perm[PERM_SIZE] = {-1};

    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &perm[i]);
    
    for(i=n-1; i>0; i--)
        if(perm[i-1] > perm[i])
            break;
    if(i==0)
        printf("-1\n");
    else{
        for(int j=n-1; j>i-1; j--){
            if(perm[i-1] > perm[j]){
                temp = perm[i-1];
                perm[i-1] = perm[j];
                perm[j] = temp;

                reverse(perm, i, n-1);
                for(int k=0; k<n; k++)
                    printf("%d ", perm[k]);
                printf("\n");
                break;
            }
        }
    }

    return 0;
}