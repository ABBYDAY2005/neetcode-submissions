class Solution {
public:
int area=0;

int x[4]={-1,1,0,0};
int y[4]={0,0,-1,1};
bool valid(int i , int j , int n , int m){
    if(i<0 || i>=n || j<0 || j>=m)return false;
    return true;
}

void dfs(vector<vector<int>>&a,int i , int j , int n , int m ,     vector<vector<bool>>&vis){
    vis[i][j]=true;
    area++;
    for(int k=0;k<4;k++){
        int row=i+x[k];
        int col=j+y[k];
        if(valid(row,col,n,m)&& a[row][col]==1 && vis[row][col]==false)dfs(a,row,col,n,m,vis);
    }
}

    int maxAreaOfIsland(vector<vector<int>>&a) {
        int n=a.size();
        int m=a[0].size();
        int maxarea=INT_MIN;
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]==1 && vis[i][j]==false)dfs(a,i,j,n,m,vis);
                maxarea=max(area,maxarea);
                area=0;
            }
        }
        return maxarea;
        
    }
};
