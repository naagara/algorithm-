#include<iostream>
#include<stack> // goi stack 
#include<algorithm> // ham thuat toan 
#define REP(i,a,b) for(int i = int(a);i <= int(b);i++)
using namespace std ;
int main()
{
	stack<int> st ;
	int n,x ;
	cin >> n ;
	REP(i,1,n)
		{
			cin >> x ;
			st.push(x);	 // bo vao stack 
		}	
	while(!st.empty())
		{
			cout << st.top() << " " ; // xuat top 
			st.pop() ; // xoa stack 	
		}			
	return 0;
}

