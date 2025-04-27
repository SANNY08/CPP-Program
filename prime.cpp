#include<iostream>
using namespace std;
bool prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
        else{
            return 1;
        }
    }
    
}
int main(){
    int n;
    cout<<"Enter numbber :"<<endl;
    cin>>n;
    prime(n);
    if(prime(n)){
        cout<<"Is a  prime"<<endl;

    }
    else{
        cout<<"Not prime"<<endl;
    }
    return 0;
}