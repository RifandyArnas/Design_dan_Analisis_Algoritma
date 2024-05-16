

//Kode dari modul halaman 41 tentang queue array

#include<iostream>
#include<cstring>

using namespace std;


const int MAXX=100;

class Queue{
	
	private:
		
		int front, rear, count;
		
		int arr[MAXX];

	public:
		
		Queue(){
			
			front=0;
			
			rear=MAXX-1;
			
			count=0;
			
		}
		
		void enqueue(int x){
			
			if(count>=MAXX){
				
				cout<<"Antrian Penuh!"<<endl;
				
			}
			
			
			rear-(rear+1)%MAXX;;
			
			arr[rear]=x;
			
			count++;
			
		}
		
		int dequeue(){
			
			if(count<=0){
				
				cout<<"Antrian Kosong!"<<endl;
				
				return -1;
				
			}
			
			int x=arr[front];
			
			front=(front+1)%MAXX;;
			
			count--;
			
			return x;
			
		}
		
		int peek(){
			
			if(count<=0){
				
				cout<<"Antrian Kosong!"<<endl;
				
				return -1;
				
			}
			
			return arr[front];
			
		}
		
		int size(){
			
			return count;
			
		}
		
		bool isEmpty(){
			
			return count==0;
			
		}
		
		bool isFull(){
			
			return count==MAXX;
			
		}
	
};


int main(){
	
	Queue q;
	
	q.enqueue(1);
	
	q.enqueue(4);
	
	q.enqueue(5);
	
		cout<<"Ukuran antrian: "<<q.size()<<endl;
		cout<<"Element pertama: "<<q.peek()<<endl;
		cout<<"Element kedua: "<<q.peek()<<endl;
		cout<<"Element keluar: "<<q.dequeue()<<endl;
		cout<<"Element pertama: "<<q.peek()<<endl;
		cout<<"Ukuran Antrian: "<<q.size()<<endl;
		
return 0;
	
}





























































































