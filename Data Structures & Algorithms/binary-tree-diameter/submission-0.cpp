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
    int diameterOfBinaryTree(TreeNode* root) {
        int maximum = 0;

        dfs(root,maximum);     
        
        return maximum;

    }

    int dfs(TreeNode* root, int& maximum){
        int l=0,r=0;

        if(root->left){
            l=dfs(root->left,maximum);
        }
        if(root->right){
            r= dfs(root->right,maximum);
        }

        maximum = max(maximum,l+r);

        return max(l,r) + 1;
    }
};
