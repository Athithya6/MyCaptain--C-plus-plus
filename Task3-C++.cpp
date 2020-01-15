#include<iostream>
using namespace std;
main() {
	int year;
	cout<<"Enter any year\n";
	cin>>year;
	if(year%4==0) {
		cout<<"The year is a leap year";
	}
	else
	cout<<"The year is a non-leap year";
}
