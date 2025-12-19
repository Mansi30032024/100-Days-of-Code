class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0; //-1 if we consider edges instead of nodes
        int lh = maxDepth(root->left);
        int rh = maxDepth(root->right);

        return 1+max(lh,rh);
        // maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
    }
};

