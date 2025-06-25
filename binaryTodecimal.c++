#include<iostream>
using namespace std;
int main(){
    int num,ans=0,pow=1;
    cout<<"Enter number in decimal: ";
    cin>>num;
    while(num>0){
        int remender = num %2;
        num = num / 2;
        ans += (remender*pow);
        pow = pow*10; 
    }
    cout<<ans;
    return 0;
}