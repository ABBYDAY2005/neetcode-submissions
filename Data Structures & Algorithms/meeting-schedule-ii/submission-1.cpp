/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& nums) {
        int n=nums.size();
        if(n==0)return 0;
        
        vector<int>start;
        vector<int>ending;
        for(int i=0;i<n;i++){
            start.push_back(nums[i].start);
        }
        for(int i=0;i<n;i++){
            ending.push_back(nums[i].end);
        }
        sort(start.begin(),start.end());
        sort(ending.begin(),ending.end());
        int maxroom=INT_MIN;
        int r=0;
        int i=0;
        int j=0;
        while(i<n && j<n){
            if(start[i]<ending[j]){
                i++;
                r++;
                maxroom=max(maxroom,r);
            }
            else{
                j++;
                r--;
            }
        }
        return maxroom;

        
    }
};
