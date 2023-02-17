#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node(int val)
    {
        this->data  = val;
        this->next = NULL;
    }

    static void print_list(Node* n)
    {
        while(n != NULL)
        {
            cout << n->data << "\t" << n->next << endl;
            n = n->next;
        }
    }

    static int list_size(Node* n)
    {
        int x = 0;
        while(n)
        {
            x++;
            n = n->next;
        }
        return x;
    }



    static void add_node(Node **head, int val)
    {
        Node *n = new Node(val);
        n->next = *head;
        *head = n;
    }

    static void insert_node(Node **prev, int val){
        Node* next = (*prev)->next;
        Node* newNode =  new Node(val);

        (*prev)->next = newNode;
        newNode->next = next;
    }

};


int main()
{

    Node* n1 = new Node(1);
    Node* n2= new Node(2);
    Node* n3 = new Node(3);


    n1->next = n2 ;
    n2->next = n3;
    n3->next = NULL;

    Node* head = n1;
    Node::add_node(&head,0);
    Node::insert_node(&n2,2);
    Node::print_list(head);
    cout << "Linked list size: " << Node::list_size(head) << endl;


    return 0;
}
