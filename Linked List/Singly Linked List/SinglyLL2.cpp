#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int data)
{
    cout << "Insert at head function running \n";
    Node *newNode = new Node(data);
    newNode->next = head;
    // tail = head;
    head = newNode;
}
void insertAtTail(Node *&head, int data)
{
    Node *newNode = new Node(data);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void insertAtPos(Node *&head, int data, int pos)
{
    Node *newNode = new Node(data);
    Node *temp = head;
    int cnt = 2;
    while (cnt < pos)
    {
        temp = temp->next;
        cnt = cnt + 1;
    }
    Node *temp2 = temp->next;
    temp->next = newNode;
    newNode->next = temp2;
}
void deleteatPos(Node *&head,int position){
if(position == 1){
    head=head->next;
}
else{
    Node* temp = head;
    while(position>2){
        temp = temp->next;
        position--;
    }
    temp->next = temp->next->next;


}
}
void printLL(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "     ";
        temp = temp->next;
    }
    cout<<endl;
}
int main()
{
    Node *node1 = new Node(10);
    // cout<<node1->data<<endl;
    Node *tail = node1;
    Node *head = node1;
    insertAtHead(head, 9);
    printLL(head);
    insertAtTail(head, 11);
    printLL(head);
    insertAtTail(head, 12);
    printLL(head);
    insertAtTail(head, 13);
    printLL(head);
    insertAtPos(head, 15, 3);
    printLL(head);
    deleteatPos(head,4);
    printLL(head);
}