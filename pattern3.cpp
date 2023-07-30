#include<iostream>
using namespace std;
int main(){
    int n,i,j,a=0,b=0;
    cout<<"enter n"<<endl;
    cin>>n;
     hehe:
    for(i=0;i<2*n-1;i++){
    b=i;
    if(i>n-1){
    
    i=2*n-2-i;}

    for(int k=0;k<i+1;k++){
        cout<<"*";}

    for(j=(n-1)*2;j>a;j--){
            cout<<" ";}
            
        if(b>=n-1)
        {a=a-2;}
        else
        {a=a+2;}

    for(int k=0;k<i+1;k++){
        cout<<"*";}

    if(b>n-1){
            i=b;
        }

    cout<<endl;
    }

    goto hehe;



return 0;
}