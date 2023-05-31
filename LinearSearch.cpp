#include<iostream>
int const Max = 50; 
using namespace std;

void input(int a[], int n){
	for(int i=0; i<n;i++){
		cout<<"Input a["<<i<<"]: ";
		cin>>a[i];
	}
}
void output(int a[], int n){
	for(int i=0; i<n;i++){
		cout << a[i] << " ";
	}
}

int linearSearch(int a[], int n, int x){
	for(int i=0; i<n;i++){
		if(a[i] == x){
			return i;
		}
	}
	return -1;
}

int main(){
	int a[Max]; int n; int x;
	cout<<"Enter the number of elements: ";cin>>n;
	input(a,n); cout<<"The elements just entered the array: "; output(a,n);
	cout<<"\nEnter the number need to search: "; cin>>x;
	int result = linearSearch(a,n,x);
	if(result == -1){
		cout<<"Not found";
	}else{
		cout<<"Value to find at position " << result << " in array";
	}
	return 0;
}
