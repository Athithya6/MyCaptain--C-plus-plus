#include<iostream>
using namespace std;
int largest(int arr[]);
int smallest(int arr[]);

int largest(int arr[]) {
	int large;
	large=arr[0];
	for(int i=0;arr[i]!='\0';i++) {
		if(large<arr[i]) {
			large=arr[i];
		}
      }
    cout<<"\nThe largest element is:"<<large;
}

int smallest(int arr[]) {
	int small;
	small=arr[0];
	for(int j=0;arr[j]!='\0';j++) {
		if(small>arr[j]) {
			small=arr[j];
		}
	}
	cout<<"\nThe smallest element is:"<<small;
}

main() {
	int arr[1000];
	int n;
	cout<<"Enter the size of the array:\n";
	cin>>n;
	cout<<"Enter the elements of the array:\n";
	for(int k=0;k<n;k++) {
		cin>>arr[k];
	}
	largest(arr);
	smallest(arr);
}

