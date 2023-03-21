#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter a value: ";
    cin>>a;
    cout<<"Enter b value: ";
    cin>>b;

    temp=a;
    a=b;
    b=temp;

    cout<<"After swapping value of a is: "<<a<<endl;
    cout<<"After swapping value of b is: "<<b<<endl;
    return 0;
}
