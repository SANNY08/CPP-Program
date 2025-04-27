#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter first number :"<<endl;
    cin>>a;

    cout<<"Enter Second number :"<<endl;
    cin>>b;

    char op;
    cout<<"Enter Operator(+,-,/,%):"<<endl;
    cin>>op;

    switch (op)
    {
        case '+' : cout<<(a+b);
                 break;
         case '-' : cout<<(a-b);
                 break;
         case '*' : cout<<(a*b);
                 break;
        case '/' : cout<<(a/b);
                 break;
       case '%' : cout<<(a%b);
                 break;                                       
    default:cout<<"Enter valid Operator "<<endl;
        break;
    }
return 0;

}