int floor=-1;
    while(root!=NULL)
    {
        if(root->val == X)
        {
            floor=root->val; return floor;
        }
        if(X>root->val)
        {
            floor=root->val;
            root=root->right;
        }
        else
        {
            
            root=root->left;
        }
    }
    return floor;
