/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int maxDepth(struct TreeNode* root){
    if (root == NULL) return 0;

    int l_depth = 0, r_depth = 0;

    //here we ignore the case that only root
    l_depth = maxDepth(root->left) + 1;
    r_depth = maxDepth(root->right) + 1;

    return l_depth > r_depth ? l_depth : r_depth;
}
