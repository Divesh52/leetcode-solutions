// Problem 144: Binary Tree Preorder Traversal
// Approach: Tree / Recursion
// Time Complexity: O(n)  (n = number of nodes)
// Space Complexity: O(n)  (recursion stack + output vector)

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
void preorder(vector<int>& ans,TreeNode* root)
    {
        if(root==NULL) return;
        else{
        ans.push_back(root->val);
        preorder(ans,root->left);
        preorder(ans,root->right);
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        preorder(ans,root);
        return ans;
    }

};
