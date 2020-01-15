#include<iostream>
using namespace std;
main() {
	char str[100];
	cout<<"Enter any string:\n";
	gets(str);
	int i;
	for(i=0;str[i]!='\0';i++) {
		if(str[i]>='A'&&str[i]<='Z') {
			str[i]=str[i]+32;
		}
	}
	cout<<"The given string in lowercase is:\n";
	for(i=0;str[i]!='\0';i++) {
	  cout<<str[i];
}
}
