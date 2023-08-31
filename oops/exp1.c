// Write a program to shift each 0 at the end of the array.
#include <stdio.h>
int main(){
    int arr[7] = {1, 2, -1, 3, 0, 9, 2}, output[7], count = 0, i = 0, j = 0;
    for(i = 0 ;i<7;i++){
        if (arr[i]!=0)
        {
            output[j] = arr[i];
            j++;
        }else{
            count++;
        }
    }
    for (int t = 7; t > 7 - count; t--){
        output[t] = 0;
        }
    for (int t = 0; t < 7; t++){
        printf("%d ",output[t]);
        }
    return 0;
}   