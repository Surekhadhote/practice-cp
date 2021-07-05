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
    
    int total=0;
    int sumroottoleaf(TreeNode* root , int sum){
        int newsum = sum*10 + root->val;
         if((!root->left)&&(!root->right))
         {
             total+=newsum;
            return total;
         }
        
        if(root->left)
        sumroottoleaf(root->left, newsum);
        if(root->right)
        sumroottoleaf(root->right,newsum);
        
     return total;
    }
    int sumNumbers(TreeNode* root) {
        int x = sumroottoleaf(root,0);
        return x;
    }
};
