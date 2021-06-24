#include <bits/stdc++.h>
using namespace std;

// Linked List Node
struct Node
{
    Node* next;
    int data;
};
void sortList(Node** head);
// Utility function to insert a node at the
// beginning
void push(Node** head, int data)
{
    Node* newNode = new Node;
    newNode->next = (*head);
    newNode->data = data;
    (*head) = newNode;
}

// Utility function to print a linked list
void printList(Node* head)
{
    while (head != NULL)
    {
        cout << head->data;
        if (head->next != NULL)
            cout << " ";
        head = head->next;
    }
    cout<<endl;
}


// Driver code
int main()
{

int t=0;
int n = 0;
cin>>t;
while(t--)
{
 Node* head = NULL;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
       // push(&head, a);
    }
    for(int i=n-1;i>=0;i--)
    {
        push(&head, arr[i]);
    }
   // printList(head);

    sortList(&head);

    printList(head);

}
    return 0;
}
// } Driver Code Ends


/* The structure of the Linked list Node is as follows:
struct Node
{
    Node* next;
    int data;
}; */

/*Your method shouldn't print anything
 it should transform the passed linked list */
void sortList(Node** head)
{
   Node* t=(*head);
   Node* p,*q;
  
  
   while(t->next !=NULL){
     
       if(t->data <0){
           p = new Node;
           p->data = t->data;
           t->data = t->next->data;
           t->next=t->next->next;
           p->next = *head;
           *head = p;
       }
       else
        t=t->next;
        
   }
  
   if(t->data<0){
           p = new Node;
           p->data = t->data;
           p->next = *head;
           *head = p;
            q = *head;
      
       while(q->next->next!=NULL){
         q=q->next;
         }
      q->next=NULL;
                
   }
  
}
