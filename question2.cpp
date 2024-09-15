#include<iostream>
using namespace std;
float area(float r){
    float a;
    a = 3.1415*r*r;
    return a;
}
int main(){
    int r;
    cout<<"Enter radius of circle : ";
    cin>>r;
    cout<<"Area of the circle is "<<area(r);
}