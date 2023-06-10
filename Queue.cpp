// Queue

#include<iostream>
using namespace std;

const int Max = 1000;

class Queue{
	private:
		int a[Max]; int front; int rear;
	public:
		Queue(){
			front = - 1;
			rear = - 1;
		}
		
		bool isEmpty(){
			return (front == - 1);
		}
		
		bool isFull(){
			return (rear == Max - 1);
		}
		
		void themQueue(int value){
			if(isFull()){
				cout << "Khong the them vi day";
			}
			if(isEmpty()){
				front = 0;
			}
			rear++;
			a[rear] = value;
			cout << "\nDa them " << value << " vao hang doi";
		}
		
		void xoaQueue(){
			if(isEmpty()){
				cout << "Khong the xoa vi rong";
			}
			int valueRemove = a[front];
			if(front == rear){
				front = - 1;
				rear = - 1;
			}else{
				front++;
			}
			cout << "\nDa xoa " << valueRemove << " ra khoi danh sach hang doi";
		}
		
		void inQueue(){
			if(isEmpty()){
				cout << "Hang doi rong";
			}
			cout << "\nHang doi la: ";
			for(int i = front; i <= rear; i++){
				cout << a[i] << " ";
			}
		}
};

int main(){
	Queue q;
	q.themQueue(41);
	q.themQueue(23);
	q.themQueue(4);
	q.themQueue(41);
	q.themQueue(56);
	q.themQueue(1);
	
	q.inQueue();
	q.themQueue(55);
	q.xoaQueue();
	q.xoaQueue();
	q.inQueue();
	return 0;
}
