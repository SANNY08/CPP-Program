#include<iostream>
using namespace std;
bool isEven(int num){
    if(num&1){
        return 0;
    }
    return 1;
}
int main(){
    int n;
    cout<<"Enter number : "<<endl;
    cin>>n;
    int ans = isEven(n);
    if(isEven(n)){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
    return 0;
}