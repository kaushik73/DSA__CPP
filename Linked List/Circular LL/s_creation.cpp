// Creating Singly Circular LL with head  pointer
#include <bits/stdc++.h>
using namespace std;

int main()
{
    struct node
    {
        int data;
        struct node *next;
    } * head= NULL, *temp, *newnode;
    int choice = 1;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        cout << "Enter Data : ";
        cin >> newnode->data;
        newnode->next = NULL;
        if(head == NULL){
            head = temp = newnode ;   }
        else{
            temp->next = newnode;
            temp = newnode;
        }
        temp->next = head; //for joinning last node to first

        cout << "Enter Choice : ";
        cin >> choice;
    }
temp = head; 
while(temp->next != head){
    cout<<temp->data<<" ";
    temp = temp->next;

}
cout <<temp->data;//for last node print

cout<<"\nCheck for Circular : ";
cout<<temp->next->data<<" \n"; // as before this temp is on last node
}