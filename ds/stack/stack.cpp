#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main()
{

	stack<int>st;
	
	st.push(1);
	st.emplace(6);
	st.pop();
	cout<<st.size()<<endl;
	cout<<st.top()<<endl;
	cout<<st.empty()<<endl;


	stack<int>cn;
	cn.push(2);
	st.swap(cn);
}
