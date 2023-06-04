#include<iostream>
const int Max = 50;
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

void swap(int a[], int x, int y){
	int temp = a[x];
	a[x] = a[y];
	a[y] = temp;
}

int partition(int a[], int left, int right){
	int pivot = a[left];
	
	int count = 0;
	
	for(int i = left+1; i <= right; i++){
		if(a[i] <= pivot)
			count++;
	}
	
	int pivotIndex = left + count;
	
	swap(a,left, pivotIndex);
	
	int i = left; int j = right;
	
	while(i < pivotIndex && j > pivotIndex){
		while(a[i] <= pivot){
			i++;
		}
		while(a[j] >= pivot){
			j--;
		}
		if(i < pivotIndex && j > pivotIndex){
			swap(a,i,j);
		}
	}
}

void quickSort(int a[], int left, int right){
	if(left >= right){
		return;
	}
	//pivot(pt chot), partition(phan vung)
	int pivot = partition(a, left, right);
	//trai
	quickSort(a, left, pivot-1);
	//phai
	quickSort(a, pivot+1, right);
}

int main(){
	int a[Max]; int n; cout << "Enter the number of elements: "; cin >> n;
	input(a,n); cout << "The elements just entered the arrays: "; output(a,n);
	
	quickSort(a,0,n-1);
	
	cout << "\nThe arrays after sorting is: "; output(a,n);
	
	return 0;
}
