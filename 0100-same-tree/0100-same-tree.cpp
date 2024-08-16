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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        vector<string> ps ;
        vector<string> qs;
         inorderTraversal(p,ps);
        inorderTraversal(q,qs);
        
        
        return (ps==qs);
        
    }
    
    
            // Function to perform inorder traversal
void inorderTraversal(TreeNode* root, vector<string> & k) {
     if(root == nullptr){
         k.push_back("null");
         return;
     }
        
    
    else {
        k.push_back(to_string(root->val));
    // Recur on the left subtree
    }
 
    
  
    inorderTraversal(root->left, k);
 

  
    // Recur on the right subtree
    inorderTraversal(root->right, k);
}
};