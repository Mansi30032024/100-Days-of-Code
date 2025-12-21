class Solution {
  public:
    vector<int> topView(Node *root) {
        vector<int> ans;
        if(root== NULL) return ans;
        
        map<int, int> mpp;//line, node
        queue<pair<Node* , int>> q;//node, line
        
        q.push({root, 0});
        while(!q.empty()){
            auto it = q.front();// it: {node, line}
            q.pop();
            Node* node = it.first;// current node
            int line = it.second;// current line
            if(mpp.find(line) == mpp.end())  mpp[line] = node->data;// insert only first node at each horizontal distance
            
            if(node->left != NULL){
                q.push({node->left, line-1});
            }
             if(node->right != NULL){
                q.push({node->right, line+1});
            }
        }
        for(auto it: mpp){
            ans.push_back(it.second);// vertical order
        }
        return ans;
    }
};

//TC:O(N) 
//SC:O(N)
//level order traversal using queue and map to store first node at each horizontal distance