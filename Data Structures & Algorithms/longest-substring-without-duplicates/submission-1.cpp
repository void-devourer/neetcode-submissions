class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> c;
        int l = 0, res = 0;
        for(int r=0;r<s.size();r++){
           if(c.find(s[r])!=c.end()){
                l = max(c[s[r]]+1, l);
            }
            c[(s[r])] = r;
            res = max(res, r-l+1);
        }
        return res;
    }
};
