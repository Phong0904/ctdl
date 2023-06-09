// sap xep cay heapsort

#include <bits/stdc++.h>
using namespace std;

void heappify(int a[], int n, int i){
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	int largest = i;
	
	if(left < n && a[left] > a[largest]){
		largest = left;
	}
	if(right < n && a[right] > a[largest]){
		largest = right;
	}
	if(largest != i){
		swap(a[i], a[largest]);
		heappify(a, n, largest);
	}
}

void HeapSort(int a[], int n){
	for(int i = (n / 2) - 1; i >= 0; i--){
		heappify(a, n, i);
	}
	for(int i = n - 1; i >= 0; i--){
		swap(a[i], a[0]);
		heappify(a, i, 0);
	}
}

int main(){
	int a[100];	
	int n = 50;
	srand(time(NULL));
	for(int i = 0; i < n; i++){
		a[i] = rand() % 500;
	}
	HeapSort(a,n);
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	
	return 0;	
}
