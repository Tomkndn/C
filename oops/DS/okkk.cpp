#include <iostream>
using namespace std;
int main(){
    int num,rev_num=0,final;
    cout<<"Enter you number: ";
    cin>>num;
    while (num!=0)
    {
        final = num % 10;
        rev_num = rev_num * 10 + final;
        num = num / 10;
    }
    cout << "Your number is: " << rev_num;
}