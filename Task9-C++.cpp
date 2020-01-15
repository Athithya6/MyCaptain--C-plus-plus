#include<iostream>
using namespace std;
main() {
	int n,y,w,d1,d2;
	cout<<"Enter the number of days\n";
	cin>>n;
	y=n/365;
	d1=n%365;
	w=d1/7;
	d2=d1%7;
	cout<<"\nYears:"<<y<<"\nWeeks:"<<w<<"\nDays:"<<d2;
	
}
