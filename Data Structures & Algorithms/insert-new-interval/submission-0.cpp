class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& nums, vector<int>& newInterval) {
    
        nums.push_back(newInterval);
        sort(nums.begin(),nums.end());
        vector<vector<int>>result;
            int n=nums.size();

        int start1=nums[0][0];
        int end1=nums[0][1];
        for(int i=1;i<n;i++){
            int start2=nums[i][0];
            int end2=nums[i][1];
            if(end1>=start2){
                end1=max(end1,end2);
                continue;
            }
            result.push_back({start1,end1});
            start1=start2;
            end1=end2;
        }
        result.push_back({start1,end1});
        return result;


        
    }
};
