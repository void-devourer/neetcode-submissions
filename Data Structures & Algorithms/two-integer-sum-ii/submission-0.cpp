class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0, r=numbers.size()-1;
        while(l < r){
            if(target > numbers[l]+numbers[r]){
                l++;
            }
            else if(target < numbers[l]+numbers[r]){
                r--;
            }
            else{
                return {l+1, r+1};
            }
        }
    }
};
