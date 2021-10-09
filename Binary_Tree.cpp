#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int key; 
    Node *left;
    Node *right;
    Node (int k)
    {
        key=k;
        left=NULL;
        right=NULL;
    }
    
};
// make a insert function and make a print function.
int main()
{
    Node *root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(40);
}

// Node *root = NULL; means binary tree is empty