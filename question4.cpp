#include<iostream>
using namespace std;
int digit(int n){
    int a=n,i=0;
    for(i;a>0;i++){
        a/=10;
    }
    return i;
}
int square(int n){
    int s=n*n;
    return s;
}
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    cout<<"No. of digits in "<<n<<" is ";
    cout<<digit(n)<<endl;
    cout<<"Square of "<<n<<" is ";
    cout<<square(n);
}
