class Solution {
public:

int x[4]={-1,1,0,0};
int y[4]={0,0,-1,1};
bool valid(int i , int j , int n, int m){
    if(i<0 || i>=n || j<0 || j>=m)return false;
    else return true;
}


    int orangesRotting(vector<vector<int>>&a) {
        int n=a.size();
        int m=a[0].size();
        int minutes=0;
        int fresh=0;
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]==2){
                    q.push({i,j});
                    a[i][j]=-2;
                }
                else if(a[i][j]==1)fresh++;
            }
        }
        while(!q.empty() && fresh>0){
            int s=q.size();
            minutes++;
        
        
            while(s--){
                pair<int,int>p=q.front();
                q.pop();
                int r=p.first;
                int c=p.second;
                for(int k=0;k<4;k++){
                    int row=r+x[k];
                    int col=c+y[k];
                    if(valid(row,col,n,m)&& a[row][col]==1){
                        a[row][col]=-2;
                        fresh--;
                        q.push({row,col});
                    }
                }
             
            }
        }
        if(fresh>0)return -1;
        else return minutes;

        
    }
};
