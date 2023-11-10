#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ARRAY_SIZE 6400000
#define INSERTION_COUNT 17

void swap(int A[], int x, int y){
    int temp = A[x];
    A[x] = A[y];
    A[y] = temp;

    return;
}

int partition(int A[], int left, int right){
    int s = left-1;
    int temp;

    for(int i=left; i<right; i++){
        if(A[i] < A[right]){
            swap(A, i, s+1);
            s++;
        }
    }
    swap(A, right, s+1);

    return s+1;
}

void insertionSort(int A[], int left, int right){
    int i, j, k;
    for(i=left+1; i<right; i++){
        int temp = A[i];

        for(j=left; j<i; j++)
            if(A[i] < A[j])
                break;
        for(k=i; k>j; k--)
            A[k] = A[k-1];
        A[j] = temp;
    }
    
    return;
}

void quickSort(int A[], int left, int right){
    int length = right - left;
    int l_pivot, r_pivot;

    if(length < 0);
    else if(length <= INSERTION_COUNT)
        insertionSort(A, left, right);
    else if(length > INSERTION_COUNT){
        if(A[left] > A[right])
            swap(A, left, right);

        swap(A, left, right-1);
        l_pivot = partition(A, left, right-1);
        r_pivot = partition(A, l_pivot+1, right);

        quickSort(A, left, l_pivot-1);
        quickSort(A, l_pivot+1, r_pivot-1);
        quickSort(A, r_pivot+1, right);
    }
    return;
}

int main(void){
    int *A = (int*)malloc(sizeof(int)*ARRAY_SIZE);
    clock_t start, end;

    //배열 초기화
    //srand((unsigned int)time(NULL));
    srand(0);
    for(int i=0; i<ARRAY_SIZE; i++)
        A[i] = rand();

    //함수 수행시간 측정
    start = clock();
    quickSort(A, 0, ARRAY_SIZE-1);
    end = clock();
    
    printf("소요시간 = %lf s\n", (double)(end-start)/CLOCKS_PER_SEC);

    return 0;
}