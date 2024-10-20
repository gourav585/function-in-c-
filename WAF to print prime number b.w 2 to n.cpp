#include<iostream>
using namespace std;
bool isprime(int n){
    if(n==1){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void allprime(int x){
    for(int i=2;i<=x;i++){
        if(isprime(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"enter your number to print prime number 2 to your number"<<endl;
    cin>>n;
    allprime(n);
}
