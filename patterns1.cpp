#include<iostream>
using namespace std;
int main(){
    int n,i,j,k,l,a,b=0;
    cout<<"enter number";
    cin>>n;
    a=n;
    for(i=0;i < 2*n-1 ;i++){

        if(i>n-1){
            b=i;
            i=(2*n-2)-i;
        }
        for(j=n;j>n-i;j--){
            cout<<j<<" ";
        }
        for(k=0;k<2*a-1;k++){
            cout<<a<<" ";

        }
        for(l=n+1-i;l<=n;l++){
            cout<<l<<" ";}

        if(b>n-1){
            i=b;}

        if(i<n && i!=n-1){
        a=a-1;}

        else if(i==n-1)
           { a=2;}

        else{a=a+1;}
        cout<<endl;}

    return 0;}