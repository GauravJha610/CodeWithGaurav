//{ Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    if(n)
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    else cout<< " ";
}


// } Driver Code Ends
/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution
{
    public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        Node *r=head1;
        Node *s=head2;
    Node *temp=NULL;
    Node *head=NULL;
    while(r!=NULL&&s!=NULL){
        
        
        if (r->data==s->data){
            if(temp==NULL){
                
            temp=r;
            head=temp;
            // temp->next=NULL;
             r=r->next;
                s=s->next;
        }
        else{
            temp->next=s;
            temp=temp->next;
            r=r->next;
                s=s->next;
        }
        }
       else  if(r->data<s->data){
            r=r->next;
        }
        else if(r->data>s->data){
            s=s->next;
        }
        
    }
    if(temp!=NULL)
    temp->next=NULL;
        return head;
    }
};



//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>> n >> m;
	    
	    Node* head1 = inputList(n);
	    Node* head2 = inputList(m);
	    
	    Solution ob;
	    Node* result = ob.findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}

// } Driver Code Ends