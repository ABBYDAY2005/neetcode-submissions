class Solution {
public:
    int lastStoneWeight(vector<int>&nums) {
        int n=nums.size();
        priority_queue<int>pq;
        for(int i=0;i<n;i++){
            pq.push(nums[i]);
        }
        while(pq.size()>1){
            int a=pq.top();
            pq.pop();
            int b=pq.top();
            pq.pop();
            if(a==b)continue;
            else pq.push(a-b);
            
        }
        if(pq.empty())return 0;
        else return pq.top();
        
    }
};
