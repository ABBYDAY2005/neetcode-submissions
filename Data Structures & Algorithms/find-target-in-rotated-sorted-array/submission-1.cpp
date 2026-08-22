class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int lo=0;
        int hi=n-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target)return mid;
            else if(nums[mid]>nums[n-1]){
                if(nums[mid]<target)lo=mid+1;
                else{
                    if(nums[0]>target)lo=mid+1;
                    else hi=mid-1;
                }
            }
            else{
                if(nums[mid]>target)hi=mid-1;
                else{
                    if(nums[n-1]<target)hi=mid-1;
                    else lo=mid+1;
                }
            }
        }
        return -1;
        
    }
};
