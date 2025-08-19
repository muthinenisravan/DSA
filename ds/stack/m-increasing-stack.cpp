#include<iostream>
#include<stack>
#include<vector>

using namespace std;
vector<int>mis(vector<int>nums)
{
	stack<int>st;


	for(int i=0;i<nums.size();i++)
	{
	
		while(!st.empty() && st.top()>nums[i])//non-decreasing, equals can be present	
		{
			st.pop();
		}
		st.push(nums[i]);	
	}

	vector<int>ans;

	while(!st.empty())
	{
	
		ans.insert(ans.begin(), st.top());
		st.pop();
	
	}
	
	return ans;
}


int main() {
    // Example usage:
    vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6};
    vector<int> result = mis(nums);
    cout << "Monotonic increasing stack: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
