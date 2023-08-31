// put odd and even elements in another array .
#include <stdio.h>
int main(){
    int arr[10] = {1,3,4,6,8,9,2,5,11,10},even[10],odd[10],j=0,k=0;
    int lenArr = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < lenArr; i++)
    {
        if(arr[i]%2==0){
            even[j]=arr[i];
            j++;
        }else{
            odd[k]=arr[i];
            k++;

        }
    }
    for (int u = 0; u < j; u++)
    {
    printf("%d ", even[u]);
    }
    printf("\n");
    for (int l = 0; l < k; l++)
    {
    printf("%d ", odd[l]);
    }
    return 0;
}