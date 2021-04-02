// CALCULATER
#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    char signe;
    cout<<"operation";
    cin>>n1;
    cin>>signe;
    cin>>n2;
    

    switch (signe)
    {
    case '+':
        cout<<n1+n2;
        break;

    case '-':
        cout<<n1-n2;
        break;

    case '/':
        cout<<n1/n2;
        break;

    case '*':
        cout<<n1*n2;
        break;

    default:
        cout<<"nothing";
        break;
    }
}
