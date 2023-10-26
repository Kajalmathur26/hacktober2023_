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
    int solve(TreeNode* root , int &ans ){
        if(root==NULL)return  1 ;
        int l= solve(root->left, ans ) ; 
        int r = solve(root->right, ans ); 
        if(l==0 ||r==0){
            ans++;return 2 ;
        }
        if(l==2 ||r==2){
            return 1 ;
        }
        return 0 ;
    }
    int minCameraCover(TreeNode* root) {
        if(!root)return 0 ;
        if(root->left==NULL && root->right==NULL)return 1 ;
        int ans =0 ; 
        int x  = solve(root ,ans);
        cout<<x<<endl;
        if(x==0)ans++;
        return ans ;
    }
};
