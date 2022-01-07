#include <bits/stdc++.h>

struct Node
{
    struct Node *next;
    struct Node *prev;
    int data;
    Node(int x)
    {
        data = x;
        next = prev = NULL;
    }
} * mid;

Node *dummy = new Node(-1);
Node *head = dummy;
Node *mid = dummy;
int cnt = 0;

void push(int data)
{
    Node* cur = new Node(data);
    cur->prev = NULL;
    cur->next = head;
    cnt++;
    head->prev = cur;
    head = cur;
    if(cnt==1) {
        mid = cur;
    }
else if(cnt %2== 0){
    mid = mid->prev;
 
}    

}   
