#include<iostream>
using namespace std;
int main(){
	int num;
	string result;
	
	cout<<"enter the integer:";
	cin>>num;
	
	result=(num%3==0)? "divisible by 3" : "not divisible by 3";
	cout<<result;
	
	return 0;
}
