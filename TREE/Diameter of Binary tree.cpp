class Solution {
    public: int maxi=0; inline int height(TreeNode* root){
    if(root==NULL) 
        return 0; 
    int l=height(root->left);
    int r=height(root->right); 
    maxi=max(maxi,l+r); return 1+max(l,r); }
               nt diameterOfBinaryTree(TreeNode* root)
                { height(root); return maxi; }
               };
