#include <iostream>
using namespace std;
struct node
{
    int key;
    struct node *left, *right;
};
struct node *______(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = _____;
    temp->left = temp->_____ = NULL;
    return temp;
}
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->key << " -> ";
        inorder(root->right);
    }
}
struct node *insert(struct node *node, int key)
{
    if (node == NULL)
        return newNode(key);
    if (key < node->key)
        node->left = insert(node->left, key);
    else
        node->right = insert(node->right, key);
    return node;
}
struct node *minValueNode(struct node *____)
{
    struct node *current = ____;
    while (current && current->left != _____)
        current = current->left;
    return current;
}
struct node *deleteNode(struct node *root, int key)
{
    if (root == NULL)
        return root;
    if (key < root->key)
        root->left = deleteNode(root->left, key);
    else if (key > root->key)
        root->right = deleteNode(root->right, key);
    else
    {
        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *_____ = root->left;
            free(root);
            return temp;
        }
        struct node *temp = minValueNode(root->right);
        root->key = temp->____;
        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}
int main()
{
    struct node *root = NULL;
    root = insert(root, 8);
    root = insert(root, 3);
    root = insert(root, 1);
    root = insert(root, 6);
    root = insert(root, 7);
    root = insert(root, 10);
    root = insert(root, 14);
    root = insert(root, 4);
    cout << "Inorder traversal: ";
    inorder(root);
    cout << "\nAfter deleting 10\n";
    root = deleteNode(root, 10);
    cout << "Inorder traversal: ";
    inorder(root);
}
