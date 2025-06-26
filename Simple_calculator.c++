#include<iostream>
#include<conio.h>
using namespace std;
void calculated(float num1, float num2, char op){
    float result;
    switch(op){
        case '+':
           result = num1+num2;
           cout<<result;
           break;
        case '-':
           result = num1-num2;
           cout<<result;
           break;
        case '*':
           result = num1*num2;
           cout<<result;
           break;
        case '/':
            if(num2==0){
                cout<<"Zero division is not possible!";
                break;
            }else{
                result = num1/num2;
                cout<<result;
                break;
            }
        default:
            cout<<"Enter valid oparator!\n";
            break;
    }
}
int main(){
    float num1, num2;
    char op, ch;
    do{
       cout<<"Enter number: ";
       cin>>num1;
       cout<<"Enter number: ";
       cin>>num2;
       cout<<"Enter operator (+,-,*,/): ";
       cin>>ch;
       calculated(num1,num2,ch);
       cout<<"\nDo you want more calculation(y/n)... ";
       cin>>ch;
    }while(ch != 'n');
    return 0;
}