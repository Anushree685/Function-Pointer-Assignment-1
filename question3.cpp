#include<iostream>
using namespace std;
int odd(int a,int b){
    int i,n;
    if(a>b) i=a,n=b;
    else i=b,n=a;
    for(i;i>=n;i--){
        if(i%2!=0) cout<<i<<endl;
    }
}
int main(){
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    odd(a,b);
}