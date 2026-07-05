class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> num(nums.begin(), nums.end());
        int longest = 0;

        for(int n : num){
            int len = 1;
            if(num.find(n-1) == num.end()){
                while(num.find(n+len) != num.end()){
                    len++;
                }
                longest = max(len,longest);
            }
        }
        return longest;
    }
};
