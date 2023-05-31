#include<iostream>
using namespace std;
int const Max = 50;

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

void interchange_sort(int a[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i] > a[j]){
				swap(a[i],a[j]);
			}
		}
	}
}

int main(){
	int a[Max]; int n;
	cout<<"Enter the number of elements: "; cin>>n;
	input(a,n); cout << "The elements just entered the array: "; output(a,n);
	interchange_sort(a,n);
	cout<<"\nThe arrays after sorting is: "; output(a,n);
	return 0;
}
