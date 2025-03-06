class Solution {
    private:
    int maxInArray(vector<int>& piles){
        int maxi=piles[0];
        for(int i=1;i<piles.size();i++){
            maxi=max(piles[i],maxi);
        }
        return maxi;
    }

    long long check(vector<int>& piles, int h,int mid){
        long long total=0;
        for(int i=0;i<piles.size();i++){
            total+=ceil((double)piles[i]/(double)mid);
        }
        return total;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=maxInArray(piles);
        while(low<=high){
            int mid=low+(high-low)/2;
            long long val=check(piles,h,mid);
            if(val<=h) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};