class Solution {
  public:
    vector<int> bottomView(Node *root) {
       
        vector<int> res;
        if(root == NULL)
            return res;
        map<int,int> mp;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            Node *temp = it.first;
            int line = it.second;
            
            mp[line] = temp->data;
            
            if(temp->left != NULL)
                q.push({temp->left, line-1});
            if(temp->right != NULL)
                q.push({temp->right, line+1});
        }
        for(auto x : mp)
            res.push_back(x.second);
        
        return res;
    }
};
