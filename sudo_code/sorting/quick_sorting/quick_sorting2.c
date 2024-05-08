#include <stdio.h>
#include <stdlib.h>

void quick_sort(int *arr, int left, int right) {
    if(left == right) return;
    int pl = left;
    int pr = right;
    int pv = arr[(left+right)/2];

    while(pl <= pr) {
        while(arr[pl] < pv) pl++;
        while(arr[pr] > pv) pr--;
        if(pl <= pr) {
            int tmp = arr[pl];
            arr[pl] = arr[pr];
            arr[pr] = tmp;

            pl++;
            pr--;
        }
    }

    if(left < pr) quick_sort(arr, left, pr);
    if(right > pl) quick_sort(arr, pl, right);
}

int main() {
    int arr_size; printf("입력할 수의 개수 : "); scanf("%d",&arr_size);
    int arr[arr_size];

    
    for(int i = 0; i < arr_size; i++) {
        printf("arr[%d] : ",i);
        scanf("%d", &arr[i]);
    }
    putchar(10);

    quick_sort(arr,0,arr_size-1);
    

    printf("----after----\n");
    for(int i = 0; i < arr_size; i++) {
        printf("arr[%d] : ",i);
        printf("%d\n", arr[i]);
    }

    return 0;
}
