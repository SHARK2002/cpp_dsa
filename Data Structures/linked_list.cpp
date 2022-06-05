#include<iostream>

using namespace std;


class node
{
    public:
    int value;
    node *next;

    node(int x)
    {
        value=x;
        next=NULL;
    }
};


class Linked_list
{
    public:

    node* head;
    Linked_list()
    {
        head=NULL;
    }

    Linked_list(node*n)
    {
        head=n;
    }

    void append(node*n)
    {
        if(head==NULL)
        {
            head=n;
        }
        else
        {
            node* temp=head;

            while(temp->next!=NULL)
            {
                temp=temp->next;
            }

            temp->next=n;
        }
    }

    void prepend(node*n)
    {
        if(head==NULL)
        {
            head=n;
        }
        else
        {
            n->next=head;
            head=n;
        }
    }

    void insert(node*n,int idx)
    {
        int j=0;
        node*temp=head;
        while(temp->next!=NULL&&j!=idx-2)
        {
            temp=temp->next;
            j++;
        }
        node*ptr=temp->next;
        temp->next=n;
        n->next=ptr;
    }

    
};


int main()
{
    
}