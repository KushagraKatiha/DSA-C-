#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter a"<<endl;
    cin>>a;
    cout<<"Enter b"<<endl;
    cin>>b;

    cout<<"Entered numbers are a = "<<a<<" and b = "<<b<<endl;

    cout<<"swaping the numbers......"<<endl;

    int c;
    c = a;
    a = b;
    b = c;

    cout<<"Swaped numbers are a: "<<a<<" and b: "<<b<<endl;

    return 0;
}