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
    bool isBalanced(TreeNode* root) {
        pair<int,int> res = dfs(root);

        return res.second;
    }

private:

    pair<int,int> dfs(TreeNode* root){
        if (!root){
            return {1,1};
        }
        pair<int,int> left = dfs(root->left);
        pair<int,int> right = dfs(root->right);
        bool isBalanced = abs(left.first - right.first) <=1 && left.second == 1 && right.second == 1;

        int height = max(left.first,right.first);

        return {height + 1,(int)isBalanced};

    }
};
