#include<iostream>
using namespace std;
int main(){
    int n,i,j,k;
    cout<<"enter n";
    cin>>n;
    for(i=0;i<n;i++){
       if(i==0||i==n-1){
        for(j=0;j<n;j++){
            cout<<"*";
        }
       }
       else{
        cout<<"*";
        for(k=0;k<n-2;k++){
            cout<<" ";}
            cout<<"*";
        
       }
       cout<<endl;

    }
    return 0;
}