#include<iostream>
using namespace std;
int main(){
    int n,i,j,k,a;
cout<<"enter n"<<endl;
cin>>n;
for(i=0;i<n;i++){
    for(j=0;j<n-1-i;j++){
        cout<<" ";int a=1,i,j;
    }
    for(k=0;k<2*i+1;k++){
        if(k<=i){
            a=65+k;
            cout<<(char)a;
            a=65;
        }
        else{
           a= 65+k-2*(k-i);
            cout<<(char)a;}}

    cout<<endl;

}
return 0;


}