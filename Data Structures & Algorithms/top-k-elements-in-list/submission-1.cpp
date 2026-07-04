class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> og;
        for(int n : nums){
            og[n] += 1;
        }
        vector<vector<int>> count(nums.size() + 1);
        for (const auto& pair : og){
            count[pair.second].push_back(pair.first);
        }
        vector<int> result;
        for(int i = count.size()-1; i > 0; --i){
            for(int n : count[i]){
                result.push_back(n);
                if(result.size()==k){
                    return result;
            }
            }
        }
        return result;
    }
};
