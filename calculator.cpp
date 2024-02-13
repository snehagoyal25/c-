#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a : ";
    cin>>a;
    int b;
    cout<<"Enter b : ";
    cin>>b;
    char op;
    cout<<"Enter operator : ";
    cin>>op;
    switch (op)
    {
    case '+':
    cout<<a+b<<endl;
        break;
    case '-':
    cout<<a-b<<endl;
    break;
    case '*':
    cout<<a*b<<endl;
        break;
    case '/':
    cout<<a/b<<endl;
        break;
    case '%':
    cout<<a%b<<endl;    
    default:
        cout<<"op is not available"<<endl;
        break;
    }
    return 0;
}