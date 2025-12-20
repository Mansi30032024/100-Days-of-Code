
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root==NULL) return res;
        queue<TreeNode*> nodesQ;
        nodesQ.push(root);
        bool leftToRight = true;

        while(!nodesQ.empty()){
            int size= nodesQ.size();
            vector<int> row(size);

            for(int i =0;i<size;i++){
                TreeNode* node = nodesQ.front();
                nodesQ.pop();

                //find position to fill node's value
                int index= (leftToRight)? i :(size-1-i);
                row[index] = node->val;
                if(node->left){
                    nodesQ.push(node->left);
                }
                if(node->right){
                    nodesQ.push(node->right);
                }
            }
            //after this level 
            leftToRight = !leftToRight;
            res.push_back(row);
        }
        return res;
    }
};
//TC:O(N) , SC:O(N)
--->
<---
--->