#include<iostream>
using namespace std;
main() {
	int arr[1000];
	int n,j=0,i=0;
	int temp;
	cout<<"Enter the size of the array\n";
	cin>>n;
	cout<<"Enter the elements of the array\n";
	for(i=0;i<n;i++) {
		cin>>arr[i];
	}
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			if (arr[i]<arr[j]) {
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"The elements of the array in ascending order are:\n";
	for(i=0;i<n;i++) {
		cout<<arr[i];
		cout<<"\t";
	}
}
