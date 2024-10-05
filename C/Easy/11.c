
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size;
    for(int i = 0; i <=5; i++) 
    {
        printf("%d ", arr[i]);
    }
    size = sizeof(arr)/sizeof(int);
    printf("\n size %d", size);
    return 0;
}