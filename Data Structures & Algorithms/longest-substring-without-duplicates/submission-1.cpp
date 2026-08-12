class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int maxlen=INT_MIN;
        unordered_map<char,int>m;
        int lo=0;
        for(int hi=0;hi<n;hi++){
            m[s[hi]]++;
            int len=hi-lo+1;
            while(len>m.size()){
                m[s[lo]]--;
                if(m[s[lo]]==0)m.erase(s[lo]);
                lo++;
                len=hi-lo+1;
            }
            if(len==m.size()){
                maxlen=max(len,maxlen);
            }
        }
        if(maxlen==INT_MIN)return 0;
        else return maxlen;
        
    }
};
