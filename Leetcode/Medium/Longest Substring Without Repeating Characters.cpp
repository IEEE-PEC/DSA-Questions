class Solution {
public:
    int lengthOfLongestSubstring(string s){
        unordered_map<char, int> m;
        int l = 0;
        int k = 0;
        for(int i = 0; i < s.length(); i++){
            char c = s[i];
            if(m.find(c) != m.end())
                k = max(k, m[c] + 1);
            m[c] = i;
            l = max(l, i - k + 1);
        }
        return l;
    }
};