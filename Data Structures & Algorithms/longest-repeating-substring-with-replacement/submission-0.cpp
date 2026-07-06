class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0, res = 0,maxi=0;
        unordered_map<char, int> c;
        for(int r =0;r<s.size();r++){
            c[s[r]]++;
            maxi = max(maxi,c[s[r]]);

            while(r-l+1-maxi > k){
                c[s[l]]--;
                l++;
            }
            res=max(res,r-l+1);
        }
        return res;
    }
};
