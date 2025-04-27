#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number :";
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int star =n-i;
        while(star)
        {
            cout<<"*";
            star--;
        }
        //Space :
        int j=1;
        while(j<=i)
        {
            cout<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    
}