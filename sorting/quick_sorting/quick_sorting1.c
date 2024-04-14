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
    int arr[10] = {5,1,6,2,6,32,6,34,4,85};

    printf("before: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    putchar(10);

    quick_sort(arr,0,9);
    
    printf("after : ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    /*

    --실행 결과--
    before: 5 1 6 2 6 32 6 34 4 85 
    after : 1 2 4 5 6 6 6 32 34 85

    */
    

}
