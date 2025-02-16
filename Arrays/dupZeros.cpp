#include<iostream>
#include<vector>

using namespace std;
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int len = arr.size();

        for(int i=0;i<len;i++){
            if(arr[i] == 0){
                int right = len-1;
                while(right>i){
                    arr[right]=arr[right-1];
                        right--;
                }
                i++;
            }
        }

	
    }

    void duplicateZeros1(vector<int>& arr) {
        int len = arr.size();
        
        int valIdx= len-1;
        int startIdx = 0;
        int endIdx = len-1;
        for (;startIdx<valIdx;startIdx++){
            if(arr[startIdx] == 0){
                valIdx--;
            }
        }
        //if last Valid index contains zero then only 1 zero possible at the end.
        if( startIdx==valIdx && (arr[valIdx] == 0)){
            
            arr[endIdx] = arr[valIdx];
            valIdx--; endIdx--;
        }
        
        while(valIdx>=0){
            if(arr[valIdx] == 0){
                arr[endIdx] = arr[valIdx];
                endIdx--;
            }
            arr[endIdx] = arr[valIdx];
            valIdx--; endIdx--;
        }
        
    }
};

void print(vector<int> &a){

   cout<<"[";
    for(int i:a)
    {
    	
	   cout<<i<<" ,";

    }
	cout<<"]"<<endl;
}

int main()
{

	vector<int>q{1,5,2,0,6,8,0,6,0};
	Solution t = Solution();
	print(q);
	t.duplicateZeros1(q);
	print(q);
	
}
