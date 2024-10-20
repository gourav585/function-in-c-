#include<iostream>
using namespace std;
int factorial(int x){
    int fact =1;
    for(int i=1;i<=x;i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int a;
    cout<<"enter your number to calculate factorial"<<endl;
    cin>>a;
    int f = factorial(a);
    cout<<"factorial is =>"<<f;
}
