#include <stdio.h>

int solution(int n, int* arr) {
    if (arr[n] == 0)
        arr[n] = solution(n-1, arr)+solution(n-2, arr)+solution(n-3, arr);
    
    return arr[n];
}

int main(void) {
    int t, n;
    int arr[11] = { 0, 1, 2, 4, 0, };

    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        printf("%d\n", solution(n, arr));
    }
    return 0;
}