// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

struct Node *buildList(int size)
{
    int val;
    cin >> val;

    Node *head = new Node(val);
    Node *tail = head;

    for (int i = 0; i < size - 1; i++)
    {
        cin >> val;
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

void printList(Node *n)
{
    while (n)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
public:
    // Function to add two numbers represented by linked list.
    struct Node *addTwoLists(struct Node *first, struct Node *second)
    {
        // code here
        // code here

        //   1. Reverse 2 lists

        Node *next = NULL;
        Node *cur = first;
        Node *prev = NULL;

        Node *new_first = NULL;
        Node *new_second = NULL;

        Node *run = NULL;

        // reverse list-1
        while (cur)
        {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }

        new_first = prev;
        // new_first is head of reversed list - 1

        cur = second;
        next = NULL;
        prev = NULL;
        // reverse list-2
        while (cur)
        {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }

        new_second = prev;
        // new_second is head of reversed list - 2

        /* 2.  initialize sum */
        int sum = 0;
        int carry = 0;
        int d1, d2 ,digit;

        Node *run1 = new_first;
        Node *run2 = new_second;

        //Build resultant list
        Node* head=NULL;
        Node* last=NULL;


        /* 3.  Sum the two lists */
        while (run1 || run2)
        {
            d1 = 0;
            d2 = 0;

            if (run1)
            {
                d1 = run1->data;
                run1 = run1->next;
            }
            if (run2)
            {
                d2 = run2->data;
                run2 = run2->next;
            }

            //Calculate sum - get carry and digit
            sum = d1 + d2 + carry;
            digit= sum%10;
            carry=sum/10;

            //add node to resultant list
            if(!head)
            {
                head = new Node(digit);
                last = head;
            }

            //else add to list
            Node* new_node = new Node(digit);
            new_node->next = NULL;
            last->next = new_node;
            last = new_node;
        }
        cout<<"resultant list"<<endl;
        printList(head);

    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;

        cin >> n;
        Node *first = buildList(n);

        cin >> m;
        Node *second = buildList(m);
        Solution ob;
        Node *res = ob.addTwoLists(first, second);
        printList(res);
    }
    return 0;
}
// } Driver Code Ends

/* //to print linked list nodes
      //print list-1
      run = new_first;

      while(run)
      {
          cout<<run->data<<" ";
          run = run->next;
      }

      cout<<"Done 1"<<endl;
*/