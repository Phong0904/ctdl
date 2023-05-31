#include<iostream>
using namespace std;
int const Max=50;

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

int binary_search(int a[], int n, int x){
	int left = 0; int right = n-1; int mid;
	do{
		mid=(left+right)/2;
		if(a[mid] == x){
			return mid;
		}else if(a[mid] < x){
			left = mid + 1;
		}else if(a[mid] > x){
			right = mid - 1;
		}
	}while(left < right);
	return -1;
}

int main(){
	int a[Max]; int n;
	cout<<"Enter the number of elements: "; cin>>n;
	input(a,n); cout<<"The elements just entered the array: "; output(a,n);
	
	interchange_sort(a,n); cout<<"\nThe array after sorting is: "; output(a,n);
	
	int x; cout<<"\nEnter the number need to search: "; cin>>x;
	int result = binary_search(a,n,x);
	if(result == -1){
		cout<<"Not found";
	}else{
		cout<<"Value to find at position " << result << " in array";
	}
	return 0;
}
