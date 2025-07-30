class Solution {
public:
    bool isAnagramSort(string s, string t) {
        std::sort(s.begin(),s.end()); //O(Slog(S))
        std::sort(t.begin(),t.end());//O(Tlog(T))

        return s==t;
    }

    bool isAnagramCount(string s, string t) {
        int S[26]={0},T[26]={0};

        for(char c:s)
        {
            S[c-'a']+=1;
        }

        for(char c:t)
        {
            T[c-'a']+=1;
        }

        for(int i=0;i<26;i++)
        {
            if(S[i] != T[i])
                return false;
        }
        //O(max(S,T)),O(1)

        return true;
    }
    bool isAnagram(string s, string t) {

        if(s.length()!=t.length())
            return false;
        unordered_map<char,int>count;

        for(char c:s)
        {
            count[c]++;
        }

        for(char c:t)
        {
            if(count.find(c) == count.end())
            {
                return false;
            }

            count[c]--;

            if(count[c]<0)
                return false;

        }

        return true;
    }

};
