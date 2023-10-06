#include <bits/stdc++.h>
using namespace std;

void linearSearch(int *arr, int input,int key){
    int temp = 0;

    // Storing the index of key element.
    for (int i = 0; i < input; i++)
    {
        if(arr[i] == key){temp = i;break;}
    }

    // Printing the indexing if present.
    if (temp){cout << "Your element is in the " << temp + 1 << " position.(using linear search)\n";}
    else cout << "Not found in the array.(using linear search)\n";

}

void binarySearch(int *arr, int input, int key){
    int low=0,high=input-1,temp=0;
    while (low<=high)
    {
        int mid = (low + high)/2;
        if (arr[mid] == key) {temp = mid;break;}
        if (arr[mid] > key) high = mid -1;
        else low = mid + 1; 
    }

    // Printing the indexing if present.
    if (temp){cout << "Your element is in the " << temp + 1 << " position.(using binary search)\n";}
    else cout << "Not found in the array.(using binary search)\n";
}

int main(){
    int input;

    // Taking lenght of an array.
    cout << "Enter length of an array: ";
    cin >> input;

    // Initializing array.
    int arr[input];

    // Taking input of all the elements in the array.
    cout << "Enter elements of an array: ";
    for (int i = 0; i < input; i++)cin >> arr[i];

    int key;
    cout<<"Enter the element for searching: ";
    cin>>key;
    linearSearch(arr,input,key);
    binarySearch(arr, input, key);
}