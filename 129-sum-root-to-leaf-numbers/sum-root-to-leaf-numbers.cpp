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
private:
    int dfs(TreeNode* root, int currSum){
        if(!root) return 0;
        currSum = currSum*10 + root->val; 
        if(!root->left && !root->right) return currSum;
        int leftS = dfs(root->left, currSum);
        int rightS = dfs(root->right, currSum);
        return rightS + leftS;
    }
public:
    int sumNumbers(TreeNode* root) {
        int currSum = 0;
        return dfs(root, currSum);
    }
};