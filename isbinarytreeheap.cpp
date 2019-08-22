{
#include <bits/stdc++.h>
using namespace std;
/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct Node* newNode(int data)
{
  struct Node* node = new Node;
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return(node);
}
bool isHeap(struct Node * tree);
/* Driver program to test size function*/
int main()
{
  int t;
  scanf("%d
", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d",&n);
     struct Node *root = NULL;
     struct Node *child;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
        if (m.find(n1) == m.end())
        {
           parent = newNode(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];
        child = newNode(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
     cout << isHeap(root)<< endl;
  }
  return 0;
}

}
/*This is a function problem.You only need to complete the function given below*/
/*
 A binary tree node has data, pointer to left child
   and a pointer to right child 
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
/*You are required to complete this method */
bool isHeap(struct Node *root)
{
    if((root==NULL)||(root->left==NULL && root->right==NULL)) 
        return true;
    if(root->left==NULL && root->right!=NULL) 
        return false;
    if(root->right==NULL)
        if(root->data < root->left->data) 
            return false;
    if(root->left&&root->right)
      if((root->data < root->left->data)||(root->data < root->right->data))
         return false;
    if(isHeap(root->left)&&isHeap(root->right))
        return true;
    return false;
}
