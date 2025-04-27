#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        //space 
        int space = n-i;
        while(space){
            cout<<" ";
            space--;
        }

        // 1st triangle
        for(int j=1;j<=i;j++){
            cout<<"*";
        }

        //2nd triangle
        int k=i-1;
        while (k)
        {
            cout<<"*";
            k--;
        }

        //grouund 1st
        int s=n-i+1;
        while(s){
            cout<<" ";
            s--;
        }
//ground 2nd 
        for(int g=1;g<=i;g++){
            cout<<"*";
        }

        int gr=n-i+1;
        while(gr){
            cout<<"*";
            gr--;
        }
        cout<<endl;
        
    }
}