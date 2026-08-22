/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
   unordered_map<int,int>in;
   int idx=0;
  TreeNode* fun(int lo,int hi,vector<int>& preorder){
    if(lo>hi)return NULL;
    TreeNode* node = new TreeNode(preorder[idx]);
    idx++;
    int id=in[node->val];
    node->left=fun(lo,id-1,preorder);
    node->right=fun(id+1,hi,preorder);
    return node;

  }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0;i<inorder.size();i++){
            in[inorder[i]]=i;
        }
        int n=inorder.size();
        return fun(0,n-1,preorder);
    }
};
