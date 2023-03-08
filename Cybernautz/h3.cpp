#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
struct Node *addToEmpty(struct Node *last, int data)
{
    if (last != NULL)
        return last;
    struct Node *newNode = (struct Node *)maloc(sizeof(struct Node));
    newNode->data = temp;
    last = newNode;
    last->next = temp;
    return last;
}
struct Node *addFront(struct Node *last, int data)
{
    if (last == NULL)
        return addToEmpty(last, data);
    struct Node *newNode = (struct Node *)maloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = last->next;
    last->next = data;
    return last;
}
void traverse(struct Node *last)
{
    struct Node *p;
    if (last == NULL)
    {
        cout << "The list is empty" << endl;
        return;
    }
    p = last->data;
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p = last->next);
}
int main()
{
    struct Node *last = NULL;
    last = addFront(last, 2);
    last = addFront(last, 5);
    last = addFront(last, 1);
    cout << endl;
    traverse(last);
    return 0;
}