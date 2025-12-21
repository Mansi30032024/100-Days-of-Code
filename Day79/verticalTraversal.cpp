
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, map<int, multiset<int>>> nodes;// x -> y -> multiset of values
        queue<pair<TreeNode* , pair<int, int>>> q;// node, {x,y}
        
        q.push({root, {0,0}});
        while(!q.empty()){//BFS: level order traversal
            auto p = q.front();// p: {node, {x,y}}
            q.pop();
            TreeNode* node = p.first;// current node
            int x=p.second.first, y= p.second.second;// current coordinates
            nodes[x][y].insert(node->val);// insert value into corresponding position
            if(node->left){ 
                q.push({node->left, {x-1,y+1}});
            }
             if(node->right){ 
                q.push({node->right, {x+1,y+1}});
            }
        }
        vector<vector<int>> ans;
        for(auto p: nodes){//map of x -> map<int, multiset<int>>
            vector<int> col;
            for(auto q: p.second){//map<int, multiset<int>>
                col.insert(col.end(), q.second.begin(), q.second.end());//insert all elements of multiset to col
                 //col.insert(position, first_iterator, last_iterator)
              }
            ans.push_back(col);
        return ans;
    }
};
//TC: O(NlogN) 
//SC: O(N)