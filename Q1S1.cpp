#include<iostream>
using namespace std;

int a;
int main(){
    int b,count=0;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    int c = a;
    while (a>=b)
    {
        count++;
        a=a-b;
    }
    cout<<"\nAnswerof "<<c<<"/"<<b<<" is:"<<count;
}
