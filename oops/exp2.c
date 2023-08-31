// 2. find the missing element in an array,
#include <stdio.h>
int main(){
    int arr[6] = {3,4,5,7,8,9};
    int fst = arr[0];
    for (int i = 0; i < 6; i++)
    {
        if (fst == arr[i])
        {
            fst++;
        }
    }
    printf("Missing number is: %d",fst);
    
}