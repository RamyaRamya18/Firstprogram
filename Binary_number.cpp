#include<iostream>
using namespace std;
int main(){
    int num,bin=0,rem=0,place=1;
    cout<<"Enter a decimal number:";
    cin>>num;
    while(num){
        rem = num%2;
        num = num/2;
        bin = bin+(rem*place);
        place = place*10;
    }
    cout<<"Binary equivalent :";
    cout<<bin;
}