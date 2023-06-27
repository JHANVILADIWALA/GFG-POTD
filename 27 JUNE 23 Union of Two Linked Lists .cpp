https://practice.geeksforgeeks.org/problems/union-of-two-linked-list/1

 struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        struct Node* ans = new Node(-1);
        struct Node* head= ans;
        
        set<int>st;
        //putting all into set to remove duplicate values
        while(head1!=NULL){
            st.insert(head1->data);
            head1=head1->next;
        }
        while(head2!=NULL){
            st.insert(head2->data);
            head2=head2->next;
        }
        
        // putting all set's values into linked list
        for(auto it: st){
            //create node
            struct Node* t = new Node(it);
            //adding to ans linedlist
            ans->next = t;
            ans=ans->next;
        }
        head=head->next;
        return head;
    }
