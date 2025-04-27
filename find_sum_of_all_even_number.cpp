#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number :";
    cin>>n;
    int i=2;
    int sum=0;
    while(i<=n)
    {
        sum=sum+i;
        i +=2;
    }
    cout<<"Sum of all Even number : "<<sum;
}