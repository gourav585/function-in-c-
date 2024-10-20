#include<iostream>
using namespace std;

void btd(int n){
    int dec = 0,rem=0,pow = 1;
    while(n>0){
        rem = n%10;
        dec = dec + rem*pow;
        pow = pow*2;
        n= n/10;
    }
    cout<<dec<<endl;
}
int main(){
    int n;
    cout<<"enter your binary number "<<endl;
    cin>>n;
   btd(n);
}
