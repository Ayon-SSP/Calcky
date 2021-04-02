// CALCULATER
#include<iostream>
using namespace std;
int main(){
    float n1,n2,n3;
    float div;
    char signe,signe2;
    cout<<"operation\n";
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
        div=n1/n2;
        cout<<div;
        break;

    case '*':
        cout<<n1*n2;
        break;

    default:
        cout<<"nothing";
        break;
    }
}
