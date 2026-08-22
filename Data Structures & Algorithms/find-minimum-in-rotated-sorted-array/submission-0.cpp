class Solution {
public:
    int findMin(vector<int> &nums) {
        int n=nums.size();
        int idx=-1;
        int lo=0;
        int hi=n-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]>nums[n-1])lo++;
            else {
                idx=mid;
                hi=mid-1;
            }
        }
        return nums[idx];
        
    }
};
