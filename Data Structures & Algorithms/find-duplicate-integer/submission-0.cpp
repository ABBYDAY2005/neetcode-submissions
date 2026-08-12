class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int lo=0;
        int hi=0;
        while(true){
            lo=nums[lo];
            hi=nums[hi];
            hi=nums[hi];
            if(lo==hi){
                lo=0;
                while(lo!=hi){
                       lo=nums[lo];
            hi=nums[hi];
                }
                return lo;

            }
        }
        return -1;
        
    }
};
