class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = getMax(piles);

        while(low<high){
            int mid = low + (high - low)/2;
            if(eatmin(piles, h, mid)){
                high = mid;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
    int getMax(vector<int>& piles){
        int maxi = 0;
        for (int i : piles){
            maxi = max(maxi,i);
        }
        return maxi;
    }

    bool eatmin(vector<int>& piles, int h, int speed){
        int hours = 0;
        for(int x : piles){
            hours += (x + speed - 1)/speed;
            if(hours>h) return false;
        }
        return true;
    }
};
