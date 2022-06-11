#include<iostream>

using namespace std;

//class node which contains a value and a pointer that points to a node
class node
{
    public:
    int value;
    node *next;
    //parameterised constructor to initialize a node object
    node()
    {
        value=0;
        next=NULL;
    }
};

//class Singly_linked_list which contains an node pointer
class Singly_Linked_list
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
            }
            cout<<endl;
        }
    }

    
};


int main() {

  Singly_Linked_list s;
  int option;
  int k1, data1;
  do {
    cout << "\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
    cout << "0. Exit" << endl;
    cout << "1. Append a value" << endl;
    cout << "2. Prepend a value" << endl;
    cout << "3. Insert a value" << endl;
    cout << "4. print()" << endl;
    cout << "5. Clear Screen" << endl << endl;

    cin >> option;
    node * n1 = new node();
    //Node n1;

    switch (option) {
    case 0:
      break;
    case 1:
      cout << "Append Node Operation \nEnter value to be Appended" << endl;

      cin >> data1;
      n1 -> value = data1;
      s.append(n1);
      //cout<<n1.key<<" = "<<n1.data<<endl;
      break;

    case 2:
      cout << "Prepend Node Operation \nEnter the value to be Prepended" << endl;

      cin >> data1;
      n1 -> value = data1;
      s.prepend(n1);
      break;

    case 3:
      cout << "Insert Node Operation \nEnter the value to pe inserted" << endl;
      cin >> data1;
      cout << "Enter the position to be inserted in: " << endl;
      cin >> k1;
      
      n1 -> value = data1;

      s.insert(n1 , k1);
      break;

    case 4:
      s.print_list();

      break;
    case 5:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }

  } while (option != 0);

  return 0;
}