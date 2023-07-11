/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    void makeparent(TreeNode*root, unordered_map<TreeNode*,TreeNode*>&mp){
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            auto f=q.front();q.pop();
            if(f->left){
                q.push(f->left);
                mp[f->left]=f;
            }
            if(f->right){
                q.push(f->right);
                mp[f->right]=f;
            }
        }
    }
    
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*>mp;
        makeparent(root,mp);
        queue<TreeNode*>q;
        q.push(target);
        int curr_level=0;
        unordered_map<TreeNode*,bool>vis;
        vis[target]=true;
        while(!q.empty()){
            if(curr_level==k) break;
            curr_level++;
            int size=q.size();
            for(int i=0;i<size;i++){
                auto f=q.front();q.pop();
                if(f->left && !vis[f->left]){
                    q.push(f->left);
                    vis[f->left]=1;
                }
                if(f->right && !vis[f->right]){
                    q.push(f->right);
                    vis[f->right]=1;
                }
                if(mp[f] && !vis[mp[f]]){
                    q.push(mp[f]);
                    vis[mp[f]]=1;
                }
            }
        }
        vector<int>ans;
        while(!q.empty()){
            ans.push_back(q.front()->val);
            q.pop();
        }
        return ans;
    }
};