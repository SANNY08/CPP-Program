#include<iostream>
using namespace std;
bool search(int arr[],int size,int num)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==num)
        {
            return 1;
        }
        
    }
return 0;
}
int main()
{
    int arr[10]={5,-7,2,10,22,-2,0,5,22,1};
    int num;
    cout<<"Enter Key to search :";
    cin>>num;
    bool find=search(arr,10,num);
    if(find){
        cout<<"Key is Present";
    }
    else{
        cout<<"Key is Absent";
    }
}