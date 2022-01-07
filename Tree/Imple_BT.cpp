#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create()
{
    int x;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    cout << "Enter data (-1 for no node) : ";
    cin >> x;
    if (x == -1)
        return 0;

    newnode->data = x;

    cout << "\nEnter left node of " << x << " : ";
    newnode->left = create();
    cout << "\nEnter right node of " << x << " : ";
    newnode->right = create();
    return newnode;
}
int main()
{
    struct node *root = 0;
    root = create();
}