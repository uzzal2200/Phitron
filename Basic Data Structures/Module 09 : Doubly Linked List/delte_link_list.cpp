#include<bits/stdc++.h>
using namespace std;
class Node
{
  public:
  int val;
    Node* next;
    Node * prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }

};
void print_normal(Node * head)
{
 Node* temp=head;
 while(temp != NULL)
 {
    cout<<temp->val<<" ";
    temp=temp->next;
 }
 cout<<endl;
}
void print_reverse(Node* tail)
{
    Node * temp=tail;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->prev;
    }
}

int size(Node* head)
{
    Node * temp=head;
    int cnt=0;
    while(temp != NULL)
    {
        cnt++;
        temp=temp->next;

    }
    return cnt;
}
void delete_at_position(Node * head,int pos)
{
    Node * temp=head;
    for(int i=1;i<=pos-1;i++)
    {
        temp=temp->next;
    }
    Node* delteNode=temp->next;
    temp->next=temp->next->next;
    temp->next->prev=temp;
    delete  delteNode;
}
void delete_tail(Node *&tail)
{
    Node* deleteNode=tail;
    tail=tail->prev;
    delete deleteNode;
    tail->next=NULL;
}
void delete_head(Node *&head)
{
  Node* deleteNode=head;
  head=head->next;
  delete deleteNode;
  head->prev=NULL;
}
int main()
{
    Node * head=new Node(10);
    Node * a=new Node(20);
    Node * b=new Node(30);
    Node * c=new Node(40);
    Node * tail=c;
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;
   int pos;
   cin>>pos;
   if(pos >=size(head))
   {
    cout<<"Invaild"<<endl;
   }
   else if(pos == 0)
   {
    delete_head(head);
   }
   else if(pos == size(head)-1)
   {
     delete_tail(tail);
   }
   else
   {
   delete_at_position(head,pos);
   }
    print_normal(head);
    print_reverse(tail);
    return 0;
}