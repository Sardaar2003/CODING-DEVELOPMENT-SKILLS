#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int key)
    {
        data = key;
        left = NULL;
        right = NULL;
    }
};
class TreeOperation
{
public:
    Node *root;
    TreeOperation()
    {
        root = NULL;
    }
    Node *InsertNode(Node *root, int key)
    {
        if (root == NULL)
        {
            // newNode = Node(key);
            root = new Node(key);
            return root;
        }
        if (key < root->data)
        {
            root->left = InsertNode(root->left, key);
        }
        else if (key > root->data)
        {
            root->right = InsertNode(root->right, key);
        }
        return root;
    }
    void AddNode(int key)
    {
        root = InsertNode(root, key);
    }
    void PreOrder(Node *root)
    {
        if (root == NULL)
            return;
        cout << root->data << " ";
        PreOrder(root->left);
        PreOrder(root->right);
    }
    void InOrder(Node *root)
    {
        if (root == NULL)
            return;
        InOrder(root->left);
        cout << root->data << " ";
        InOrder(root->right);
    }
    int minimumValue(Node *root)
    {
        int min = root->data;
        while (root->left != NULL)
        {
            min = root->left->data;
            root = root->left;
        }
        return min;
    }
    Node *deleteNode(Node *root, int key)
    {
        if (root == NULL)
            return root;
        if (key < root->data)
            root->left = deleteNode(root->left, key);
        else if (key > root->data)
            root->right = deleteNode(root->right, key);
        else
        {
            if (root->left == NULL)
                return root->right;
            else if (root->right == NULL)
                return root->left;
            root->data = minimumValue(root->right);
            root->right = deleteNode(root->right, root->data);
        }
        return root;
    }
    void DeleteNode(int key)
    {
        root = deleteNode(root, key);
    }
};

int main()
{
    TreeOperation bst;
    int n;
    cin >> n;
    while (n--)
    {
        int ele;
        cin >> ele;
        bst.AddNode(ele);
    }
    cout << "Pre Order Traversal : " << endl;
    bst.PreOrder(bst.root);
    cout << "\nIn Order Traversal : " << endl;
    bst.InOrder(bst.root);
    bst.DeleteNode(60);
    cout << "\nIn Order Traversal : " << endl;
    bst.InOrder(bst.root);
}