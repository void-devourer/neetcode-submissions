class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0, r=heights.size()-1, maxi = 0;
        while(l<r){
            int area = min(heights[l], heights[r]) * (r - l);
            maxi = max(area, maxi);
            if(heights[l]<=heights[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return maxi;
    }
};
