#include<iostream>
using namespace std;
int sum1(int x,int y){
       int sum2= x+y;
        return sum2;
}
int diff1(int n,int p){
    int diff2 = n-p;
    return diff2;
}

int main(){
    int a,b;
    cout<<"enter your first val"<<endl;
    cin>>a;
    cout<<"enter your second val"<<endl;
    cin>>b;
    int s = sum1(a,b);
    int d = diff1(a,b);
    cout<<"sum is =>"<<s<<endl;
    cout<<"diff is =>"<<d;
} 
