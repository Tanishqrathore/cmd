#include<iostream>
using namespace std;
int main(){int a=1,i,j,n;
    cout<<"enter number";
    cin>>n;


    for(i=0;i<n;i++){
        for(j=a;j<a+i;j++){
            cout<<j<<" ";
        }
        a=j;
        cout<<endl;
    }
    return 0;
}
