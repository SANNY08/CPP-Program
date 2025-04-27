#include<iostream>
using namespace std;
int ap(int n){
    int ans = (3*n+7);
    return ans;
}
int main(){
    int n;
    cout<<"Enter  number "<<endl;
    cin>>n;
   
    cout<<"Answer is :"<< ap(n);
}
