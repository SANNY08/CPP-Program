#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;
    for(int i=1; i<=n; i++){
        //space 
        int space = n-i;
        while (space)
        {
            cout<<" ";
            space--;
        }
  //2nd triangle  
        for(int j=1; j<=i; j++)
        {
            cout<<i;
        }
       
//3rd trianfle
        int start = i-1;
        while(start){
            cout<<start;
            start--;
        }
        cout<<endl;
    }
   
}