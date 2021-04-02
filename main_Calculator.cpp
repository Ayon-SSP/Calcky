// CALCULATER
#include<iostream>
using namespace std;
int main(){
    float n1,n2,n3;
    float div;
    char signe,signe2;
// CALCULATER
#include<iostream>
using namespace std;
int main(){
    float n1,n2,n3;
    float div,pro;
    char signe,signe2;
    cout<<"operation\n";
    cin>>n1;
    cin>>signe;
    cin>>n2;
    // cin>>signe2;
    // cin>>n3;
    pro=1;
    for(int i=1;n2>=i;i++){
        pro = pro*n1;
    };
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
    case '^':
        cout<<pro;
        break;

    default:
        cout<<"nothing";
        break;
    }
}
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
