#include <bits/stdc++.h>
using namespace std;

void insertionSort(int *arr,int input){

    // sorting algorithm using insertion sort
    for (int i = 1; i < input; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (arr[j] > temp && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    // Printing array.
    for (int i = 0; i < input; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){
    int input;

    // Taking lenght of an array.
    cout<<"Enter length of an array: ";
    cin>>input;

    // Initializing array.
    int arr[input];

    // Taking input of all the elements in the array.
    cout<<"Enter elements of an array: ";
    for (int i = 0; i < input; i++)cin>>arr[i];

    insertionSort(arr,input);
    
    
}