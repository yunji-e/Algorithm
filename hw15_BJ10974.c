#include <stdio.h>

void permutation(int items[], int bucket[], int length, int k){
    if(k==0){
        for(int i=0; i<length; i++)
            printf("%d ", items[bucket[i]]);
        printf("\n");
        return;
    }
    
    int lastIndex = length-k-1;
    for(int i=0; i<length; i++){
        int flag = 0;
        for(int j=0; j<=lastIndex; j++)
            if(bucket[j] == i)
                flag = 1;
        if(flag == 1)
            continue;

        bucket[lastIndex+1] = i;
        permutation(items, bucket, length, k-1);
    }
    return;
}

int main(void){
    int n;
    int items[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int bucket[8];

    scanf("%d", &n);

    permutation(&items, &bucket, n, n);

    return 0;
}