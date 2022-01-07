// #include <bits/stdc++.h>
// using namespace std;
// int counnt = 0;
// struct node
// {
//     int data;
//     struct node *next;
//     struct node *prev;
// };
// struct node *head, *temp, *temp2, *newnode, *mid;
// void push(int data)
// {
//     newnode = (struct node *)malloc(sizeof(struct node));
//     if (head == NULL)
//     {
//         cout << " head-null";

//         newnode->data = data;
//         newnode->prev = NULL;
//         newnode->next = NULL;
//         head = newnode = temp2;
//         cout<<"head - "<<head;
//         temp = head;
//         mid = newnode;
//         counnt++;
//     }
//     else if (counnt % 2 == 0)
//     {
//         cout << "even";

//         newnode->data = data;
//         head = newnode;
//         mid = newnode;
//         temp->next = newnode;
//         newnode->prev = temp;
//         newnode->next = NULL;
//         temp = newnode;
//         counnt++;
//     }
//     else
//     {
//         cout << "odd";

//         newnode->data = data;
//         head = newnode;
//         temp->next = newnode;
//         newnode->prev = temp;
//         newnode->next = NULL;
//         temp = newnode;
//         counnt++;
//     }
// }
// void pop()
// {
// }
// int main()
// {
//     // head = NULL;
//     cout << "int main";
//     push(3);
//     push(43);
//     push(63);
//     push(83);
//     push(67);
//     cout<<head;
//     while (temp2->next != NULL)
//     {
//         cout << temp2->data << " ";
//         temp2 = temp2->next;
//     }
// }









#include <bits/stdc++.h>
using namespace std;

class myStack
{
	struct Node
	{
		int num;
		Node *next;
		Node *prev;

		Node(int num)
		{
			this->num = num;
		}
	};

	//Members of stack
	Node *head = NULL;
	Node *mid = NULL;
	int size = 0;

public:
	void push(int data)
	{
		Node *temp = new Node(data);
		if (size==0)
		{
			head = temp;
			mid = temp;
			size++;
			return;
		}

		head->next = temp;
		temp->prev = head;

		//update the pointers
		head = head->next;
		if (size%2==1)
		{
			mid = mid->next;
		}
		size++;
	}

	void pop()
	{
		if (size!=0)
		{
			if (size==1)
			{
				head = NULL;
				mid = NULL;
			}
			else
			{
				head = head->prev;
				head->next = NULL;
				if (size%2==0)
				{
					mid = mid->prev;
				}
			}
			size--;
		}
	}

	int findMiddle()
	{
		if (size==0)
		{
			return -1;
		}
		return mid->num;
	}

	void deleteMiddle()
	{
		if (size!=0)
		{
			if (size==1)
			{
				head = NULL;
				mid = NULL;
			}
			else if (size==2)
			{
				head = head->prev;
				mid = mid->prev;
				head->next =NULL;
			}
			else
			{
				mid->next->prev = mid->prev;
				mid->prev->next = mid->next;
				if (size%2==0)
				{
					mid = mid->prev;
				}
				else
				{
					mid = mid->next;
				}
			}
			size--;
		}
	}
};


int main()
{
	myStack st;
	st.push(11);
	st.push(22);
	st.push(33);
	st.push(44);
	st.push(55);
	st.pop();
	st.pop();
	st.pop();
	cout<<st.findMiddle()<<endl;
	st.deleteMiddle();
	cout<<st.findMiddle()<<endl;
	return 0;
}