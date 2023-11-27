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
void insert_tail(Node * &head,Node *&tail,int val)
{
    Node * newNode=new Node(val);
    if(tail == NULL)
     {
         head=newNode;
       tail=newNode;
       return ;
     }
    tail->next=newNode;
    newNode->prev=tail;
    tail=tail->next;
    //tail=newNode;
    
}
 int main()
 {
     Node * head=NULL;
     Node * tail=NULL;
     int val;
     while(true)
     {
        cin>>val;
        if(val == -1) break;
        insert_tail(head,tail,val);
     }
     print_normal(head);
     print_reverse(tail);
        return 0;
 }
 