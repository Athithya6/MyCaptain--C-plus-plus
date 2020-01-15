#include<iostream>
using namespace std;

main() {
	char org[1000];
	char anag[1000];
	char a[26]={0};
	char b[26]={0};
	int i,flag=1;
	char x,y;
	cout<<"Enter the first string\n";
	gets(org);
	cout<<"Enter the second string\n";
	gets(anag);
	for(i=0;org[i]!='\0';i++) {
		if(org[i]>='a' && org[i]<='z') {
			x=org[i]-'a';
			a[x]++;
		}
	}
	
	for(i=0;anag[i]!='\0';i++) {
		if(anag[i]>='a' && anag[i]<='z') {
			y=anag[i]-'a';
			b[y]++;
		}
	}
	for(i=0;i<25;i++) {
		if (a[i]!=b[i]) {
			flag=0;
		}
}
	if(flag==0) {
		cout<<"\nThe two strings are not anagrams";
	}
	else {
	cout<<"\nThe two strings are anagrams";
}
}
	

