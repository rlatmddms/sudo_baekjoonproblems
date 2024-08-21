#include <stdio.h>

int main() {
    int arr_size; printf("입력할 수의 개수 : "); scanf("%d",&arr_size);
    int arr[arr_size];
    for(int i = 0; i < arr_size; i++) {
        printf("arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    putchar(10);

    for(int i = 0; i < arr_size; i++) {
        for(int j = i+1; j < arr_size; j++) {
            if(arr[i] > arr[j]) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    printf("----after----\n");
    for(int i = 0; i < arr_size; i++) {
        printf("arr[%d] : ",i);
        printf("%d\n", arr[i]);
    }

    return 0;
}
