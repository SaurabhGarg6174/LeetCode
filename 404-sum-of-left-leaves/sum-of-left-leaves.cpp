class Solution {
public:
int solve(TreeNode* root)
    {
        if(!root) return 0;
        int sum = 0;
        if (root->left && !root->left->left && !root->left->right) {
        sum += root->left->val;
        }
        sum += solve(root -> left);          
        sum += solve(root -> right);
        return sum;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        return solve(root);
    }
};