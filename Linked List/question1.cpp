// https://www.hackerearth.com/practice/data-structures/linked-list/singly-linked-list/practice-problems/algorithm/reversed-linked-list-01b722df/

// Reverse of a Singly LL
#include <bits/stdc++.h>
using namespace std;

int main()
{
    struct node
    {
        int data;
        struct node *next;
    };

    struct node *newnode, *head, *temp, *last;
    int choice;
    head = NULL;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        // cout << "Enter data : ";
        cin >> newnode->data;
        newnode->next = NULL;
        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }

        // cout << "Do you want to continue(0,1) : ";
        cin >> choice;
    }
    // Print Real Linked List
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    // Reverse of Your LL
    struct node *current = head;
    struct node *next = NULL;
    struct node *prev = NULL;
    while (current != NULL)
    {
        next = current->next; //next ↑
        current->next = prev; //Main ↑
        prev = current;       //prev ↑
        current = next;       //current ↑
    }
    temp = prev;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}


























/* #include<bits/stdc++.h>

using namespace std;

 

struct node{

   long long int data;

   node* next;

};

struct node* insert(struct node *head,long long int data)

{

   struct node *t=(struct node *)malloc(sizeof(struct node));

   t->data=data;

   t->next=NULL;

   static struct node *last=NULL;   // using static pointer pointing to last element so that insertion can be done in O(1) time .

   if(head==NULL)

   {

       head=t;

       last=t;

   }

   else{

       last->next=t;

       last=t;

   }

   return head;

}

 

struct node * solve(struct node* head)

{

   struct node *temp=head,*p=NULL;

   while(temp!=NULL){ 

     if(temp->data%2==0)                                        // if element is even 

     {

                        // start is pointing to the previous element to first occurence of  even and  end is pointing to next element to the last even. 

                       // start-> 1 2 4 6  4 10 8 12 4 end-> 7 9    

       struct node* pre,*next,*start,*end;  

       pre=NULL;

       start=temp;

       while(temp!=NULL && temp->data%2==0)                             // loop for reversing the linnked list using 3 pointer.

       {

           next=temp->next;

           temp->next=pre;

           pre=temp;

           temp=next;

       }

       end=temp;

 

       start->next=temp;

       if(p==NULL)

       {

         head=pre;

       }

       else

       {

         p->next=pre;

       }

     }

     else{

       p=temp;

       temp=temp->next;

     }

   }

   return head;

}

 

void display(struct node *head)

{

   struct node* temp=head;

   while(temp!=NULL)

   {

       cout<<temp->data<<" ";

       temp=temp->next;

   }

}

 

int main()

{

   int n;

   cin>>n;

   long long int temp;

   struct node *head=NULL;

   for(int i=0;i<n;i++)

   {

       cin>>temp;

       head=insert(head,temp);

   }

   head=solve(head);

   display(head);

   return 0;

}*/
