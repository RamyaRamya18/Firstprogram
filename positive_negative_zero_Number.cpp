#include <iostream>
using namespace std;
int main(){
	int limit,num,positive = 0,negative = 0,zero = 0;
	cout<<"Enter the limit:";
	cin>>limit;
	cout<<"Enter number:";
	cout<<limit;
	while(limit){
		cin>>num;
		if(num>0){
			positive++;
		}
		else if(num<0){
		negative--;
		}
		else{
			zero++;
		}
		limit--;
	}
	cout<<"positive number:";
	cout<<positive;
	cout<<"negative number:";
	cout<<negative;
	cout<<"zero number:";
	cout<<zero;	
}
