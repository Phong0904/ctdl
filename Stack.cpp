// stack

#include<iostream>
using namespace std;
const int Max = 1000;
class Stack{
	private:
		int top; int a[Max];
	public:
		Stack(){
			top = -1;
		}
		
		bool isEmpty(){
			return (top == - 1);
		}
		
		bool isFull(){
			return (top == Max - 1);
		}
		
		void push(int value){
			if(isFull()){
				cout << "Mang day"; return;
			}
			top++;
			a[top] = value;
			cout << "Da them " << value << " vao cuoi danh sach\n";
		}
		
		void pop(){
			if(isEmpty()){
				cout << "Khong co phan tu trong danh sach de xoa"; return;
			}
			
			int popValue = a[top];
			top--;
			cout << "Da xoa thanh cong " << popValue << " ra khoi danh sach";
		}
		
		void inStack(){
			if(isEmpty()){
				cout << "Danh sach rong";
			}
			
			cout << "Danh sach trong mang la: ";
			for(int i = 0; i <= top; i++){
				cout << a[i] << " ";
			}
		}
};

int main(){
	Stack st;
	st.push(41);st.push(23);st.push(4);st.push(14);st.push(56);st.push(1);
	st.inStack();
	st.pop();
	st.inStack();
	
	return 0;
}
