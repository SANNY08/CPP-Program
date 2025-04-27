#include<iostream>
using namespace std;
void reverse(int arr[],int n)
{
    int start =0;
    int end=n-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printarr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
int main()
{
    int arr[10]={2,4,9,3,0,5,2,5,3,7};

    reverse(arr,10);
    printarr(arr,10);
    return 0;

}