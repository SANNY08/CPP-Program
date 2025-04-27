#include<iostream>
using namespace std;
int main()
{
    int size,sum=0;
    cout<<"Enter Size of Array :";
    cin>>size;
    int num[100];
    cout<<"Enter Array Element :";
    for(int i=0;i<size;i++)
    {
        cin>>num[i];
        sum=sum+num[i];
    }
    cout<<"Sum of Array is :"<<sum;
    return 0;
}