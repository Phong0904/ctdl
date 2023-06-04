#include<iostream>
const int Max=50;
using namespace std;

void input(int a[], int n){
	for(int i=0; i<n; i++){
		cout << "Input a[" << i << "]: ";
		cin >> a[i];
	}
}

void output(int a[], int n){
	for(int i=0; i<n; i++){
		cout << a[i] << " ";
	}
}

int InsertionSort(int a[], int n){
	for(int i = 1; i < n; i++){
		int key = a[i];
		int j = i - 1;
		while(j >= 0 && a[j] > key){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
	}
}

int InsertionSort1(int a[], int n){
	for(int i = 0; i < n; i++){
		int j = i;
		while(j > 0 && a[j] <= a[j-1]){
			swap(a[j],a[j-1]);
			j--;
		}
	}
}

int main(){
	int a[Max]; int n; cout << "Enter the number of elements: "; cin >> n;
	input(a,n); cout << "The elements just entered the arrays: "; output(a,n);
	
	InsertionSort(a,n);
	cout << "\nThe arrays after sorting is: "; output(a,n);
	
	InsertionSort1(a,n);
	cout << "\nThe arrays after sorting is: "; output(a,n);
	return 0;
}
