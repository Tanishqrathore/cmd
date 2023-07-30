#include<iostream>
using namespace std;
int main(){
    int n,i,j,a;
    cout<<"enter n";
    cin>>n;
    for(i=n;i>0;i--){
        
         for(j=i;j<=n;j++){
            a=97+(j-1);
            cout<<(char)a;}
            cout<<endl;

}
return 0;} 