#include<iostream>
using namespace std;
int main(){
    int N,i,j,k,b=0;
    cout<<"enter N"<<endl;
    cin>>N;
    for(i=0;i<2*N;i++){
        if(i>N-1){
            b=i;
            i=(2*N-1)-i;
        }

for(int l=0;l<N-i;l++){
    cout<<"*";
}
for(j=0;j<2*i;j++){
    cout<<" ";
}
for( int l=0;l<N-i;l++){
    cout<<"*";
    
}
if(b>N-1){
    i=b;
}
cout<<endl;

    }
    return 0;
    
    
    
    
    
    
    
    
    }