#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter your number: ";
    cin>>n;
    int arr[n+1];
    for (int i = 0; i<=n ;i++)arr[i]=i;
    for (int i = 2; i*i <= n ; i++)
    {
        int x = i;
        if (arr[x]!=0)
        {
            x+=i;
        }
        while (x<=n)
        {
            arr[x]=0;
            x+=i;
        }
    }
    for (int i = 2; i <= n ; i++)
    {
        if (arr[i]!=0)
        {
            cout<<i<<" ";
        }
        
    }
    
    
    
}

