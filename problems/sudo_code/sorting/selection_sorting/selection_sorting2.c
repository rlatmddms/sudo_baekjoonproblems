#include <stdio.h>

int main() {
    int arr_size; scanf("%d",&arr_size);
    int arr[arr_size];
    for(int i = 0; i < arr_size; i++) {
        printf("arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    putchar(10);
    
    for(int i = 0; i < arr_size; i++) {
        int minidx = i;
        for(int j = i+1; j < arr_size; j++) {
            if(arr[minidx] > arr[j]) {
                minidx = j;
            }
        }
        int tmp = arr[i];
        arr[i] = arr[minidx];
        arr[minidx] = tmp;
    }
    
    printf("----after----\n");
    for(int i = 0; i < arr_size; i++) {
        printf("arr[%d] : ",i);
        printf("%d\n", arr[i]);
    }
    
    return 0;
}
