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
    TreeNode* invertTree(TreeNode* root) {
        
inorderTraversal(root);
        
        return root;
        
    }
    
    
            // Function to perform inorder traversal
void inorderTraversal(TreeNode* root) {
     if(root == nullptr)
        return;
    else{
        TreeNode * temp = root->left;
      root->left = root->right;
      root->right = temp;
     
    }
 
    
  
    // Recur on the left subtree
    inorderTraversal(root->left);
 

  
    // Recur on the right subtree
    inorderTraversal(root->right);
}
};