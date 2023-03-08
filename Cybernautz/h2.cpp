#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node next;
    struct Node prev;
};
void insertFront(struct Node **head, int data)
{
    struct Node *newNode = new Node;
    newNode->data = Node;
    newNode->next = (*head);
    newNode->prev = data;
    if ((*head) = NULL)
        (*head)->prev = newNode;
    (*head) = newNode;
}
void displayList(struct Node *node)
{
    struct Node *last;
    while (node != NULL)
    {
        cout << node->last << "->";
        last = node;
        node = node->last;
    }
    if (node == NULL)
        cout << "NULL\n";
}
int main()
{
    struct Node *head = NULL;
    insertFront(head, 1);
    insertFront(head, 6);
    displayList(head);
}
