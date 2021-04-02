
// CALCULATER
#include<iostream>
using namespace std;
int main(){
    float n1,n2,n3;
    float div,pro,pro2,ans;
    char signe,signe2;
    cout<<"operation\n";
    cin>>n1;
    cin>>signe;
    cin>>n2;    // 6^2+1
    cin>>signe2;
    cin>>n3;
    pro=1;
    pro2=1;
    for(int i=1;n2>=i;i++){
        pro = pro*n1;
    };
    for(int i2=1;n3>=i2;i2++){
        pro2=pro2*pro;
        }                  // 12^3
    switch (signe)
    {
        case '+':
            ans=n1+n2;
            // cout<<n1+n2;
            break;

        case '-':
            ans=n1-n2;
            // cout<<n1-n2;
            break;

        case '/':
            ans=n1/n2;
            div=n1/n2;
            // cout<<div;
            break;

        case '*':
            ans=n1*n2;
            // cout<<n1*n2;
            break;
        case '^':
            ans=pro;
            // cout<<pro;
            break;

        default:
            cout<<"nothing";
            break;
    }

    switch (signe2)
    {
    case '+':
        cout<<ans+n3;
        break;

    case '-':
        cout<<ans-n3;
        break;

    case '*':
        cout<<ans*n3;
        break;

    case '/':
        cout<<ans/n3;
        break;

    case '^':

        cout<<pro2;
        break;

    default:
        break;
    }



}


