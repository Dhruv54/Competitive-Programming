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
    bool dfs(TreeNode* node,int currSum,int targetSum){
        if(!node)
            return false;
        
        currSum+=node->val;
        if(!node->left && !node->right)
            return currSum==targetSum;
        return (dfs(node->left,currSum,targetSum) || dfs(node->right,currSum,targetSum));
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        int currSum=0;
        return dfs(root,currSum,targetSum);
    }
};