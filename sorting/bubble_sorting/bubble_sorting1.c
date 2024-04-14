#include <stdio.h>

int main() {
    int arr[10] = {1,6,2,4,8,2,45,77,12,3};

    printf("----before----\n");
    for(int i = 0; i < n; i++) {
        printf("arr[%d] : %d\n",i,arr[i]);
    }
    putchar(10);
    
    for(int i = 0; i < 10; i++) {
        for(int j = i+1; j < 10; j++) {
            if(arr[i] > arr[j]) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    
    printf("----after----\n");
    for(int i = 0; i < n; i++) {
        printf("arr[%d] : ",i);
        printf("%d\n", arr[i]);
    }
    return 0;
}
