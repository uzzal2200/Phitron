for(Node* i=head;i->next != NULL;i=i->next)
    {
        for(Node * j=i->next;j !=NULL;j=j->next)
        {
            if(i->val > j->val)
            {
                swap(i->val,j->val);
            }
        }
    }