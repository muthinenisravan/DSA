class Solution {
public:
    string getHashKey(string &s)
    {
        string k = "#";
        int key[26]={0};
        
        for(char c:s)
        {
            key[c-'a']++;
        }

        for(int i=0;i<26;i++)
        {
            k+= '#';
            k+=to_string(key[i]);
        }

        return k;
    }


    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>group;
        vector<vector<string>>ans;
        for(string s:strs)
        {
            string key = getHashKey(s);
            group[key].push_back(s);
        }

        for(auto g:group)
        {
            ans.push_back(g.second);
        }

        return ans;

    }
};
