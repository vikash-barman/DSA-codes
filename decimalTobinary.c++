#include<iostream>
using namespace std;
int main(){
   int num,ans=0,pow=1;
    cout<<"Enter number in binary: ";
    cin>>num;
    while(num>0){
        int remender = num %10;
        ans += (remender*pow);
        num = num / 10;
        pow = pow*2; 
    }
    cout<<ans; 
    
}