#include <stdio.h>
int main(){
    int arr[] = {9,2,5,1,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    // printf("%d",size);
    for (int j = 0; j < size-1; j++)
    {
        // for (int i = j+1; i < size - 1; i++)
        // {
            if (arr[j] > arr[j+1])
            {
                arr[j], arr[j+1] = arr[j+1], arr[j];
            }
        // }
    }
    for (int i = 0; i < size; i++)
    {
        printf(" %d ",arr[i]);
    }
    
    
}