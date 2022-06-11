#include<iostream>

using namespace std;

//class node which contains a value and a pointer that points to a node
class node
{
    public:
    int value;
    node *next;
    node *prev;
    //parameterised constructor to initialize a node object
    node(int x)
    {
        value=x;
        next=NULL;
        prev=NULL;
    }
};

//class Singly_linked_list which contains an node pointer
class Doubly_Linked_list
{
    public:

    node* head;

    //defalut constructor to initialize an object of linkedlist
    void Linked_list()
    {
        head=NULL;
    }
    
    //parameterised constructor to initialize a linked list
    void Linked_list(node*n)
    {
        head=n;
    }

    //function to append a node to the end of the linked list
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
            n->prev=temp;
        }
    }

    // function to append a node in the beginning of the linked list
    void prepend(node*n)
    {
        if(head==NULL)
        {
            head=n;
        }
        else
        {
            n->next=head;
            head->prev=n;
            head=n;
        }
    }

    // function to insert a node in the ith position of the linked list
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
        ptr->prev=n;
        n->next=ptr;
    }

    //function to print the linked list    
    void print_list()
    {
        if(head==NULL)
        {
            cout<<"List is Empty"<<endl;
        }
        else
        {
            cout<<"The Current List is"<<endl;

            node* temp=head;

            while(temp!=NULL)
            {
                cout<<temp->value<<"->";
                temp=temp->next;
            }
            cout<<endl;
        }
    }

    
};


int main() {

}