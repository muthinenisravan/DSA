#include<iostream>
#include<stack>
#include<vector>
#include <bits/stdc++.h>

using namespace std;

vector<int>mds(vector<int>nums)
{
	stack<int>st;
	for(int i=0;i<nums.size();i++)
	{
	
		while(!st.empty() && st.top()<nums[i])	
		{
			st.pop();
		}
		st.push(nums[i]);	
	}

	vector<int>ans;
	while(!st.empty())
	{
		ans.push_back(st.top());
		st.pop();
	}
	reverse(ans.begin(),ans.end());

	return ans;
}

int main() {
    // Example usage:
    vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6};
    vector<int> result = mds(nums);
    cout << "Monotonic increasing stack: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
