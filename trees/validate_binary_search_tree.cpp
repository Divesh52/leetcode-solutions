// Problem 98: Validate Binary Search Tree
// Approach: Tree / Inorder Traversal + Validation
// Time Complexity: O(n log n)  (due to sorting and set creation)
// Space Complexity: O(n)  (for inorder vector and set)

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
    void inorder(vector<int>& ans,TreeNode* root)
    {
        if(root==NULL) return;
        else{
        inorder(ans,root->left);
        ans.push_back(root->val);
        inorder(ans,root->right);}
    }
    bool isValidBST(TreeNode* root) {
        vector<int> ans;
        
        int flag=0;
        inorder(ans,root);
        vector<int>vec;
        vec=ans;
        set <int> a(vec.begin(), vec.end());
        sort(vec.begin(),vec.end());
        cout<<ans[0];
        cout<<vec[0];
        if(root->left==NULL && root->right==NULL) return true;
        if(vec==ans && a.size()==vec.size() ) return true;
        else return false;
    }
};
