#include<iostream>
using namespace std;
void Enqueue (int queue[], int &top, int x){
	top++;
	queue[top]= x;
}
int Dequeue (int queue[], int &top){
	int x;
	if(top==-1) {
		return -1;	
	}
	x =queue[0];
	//lap phan tu queue[0]
	for(int i=0;i<top;i++){
		queue[i]=queue[i+1];
	}
	cout<<"top1 "<<top<<endl;
	top--;
	cout<<"top2 "<<top<<endl;	
 	return x;
}
void Dequeueall(int queue[],int &top){
	while(top>=0){
		int x=Dequeue(queue,top);
		cout<<x<<endl;
	}
}
int main(){
	int queue[100];
	int A[100];
	int top = -1;
	int n;
	cout<<"nhap n: ";cin>>n;
	for(int i=0;i<n;i++){
		cout<<"nhap data: ";cin>>A[i];
		Enqueue(queue,top,A[i]);
	}
	cout<<endl;
	Dequeueall(queue,top);
}