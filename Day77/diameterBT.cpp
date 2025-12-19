
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
       int dia = 0;
       height(root,dia);
       return dia;
    }
    int height(TreeNode* node, int& diameter){
        if(!node){return 0;}
        int lh = height(node->left, diameter);
         int rh = height(node->right, diameter);
         diameter = max(diameter, lh+rh);
         return 1+ max(lh,rh);
    }
};
//diameter-> longest path between any two nodes in a tree
//this path may or may not pass through the root
