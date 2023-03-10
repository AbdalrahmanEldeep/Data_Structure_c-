#include "iostream"
#include <ctime>
using namespace std;

// <=============== Global Variables For Our Programm  =============>

//===> Our Struct Node
struct Node
{
    int data;
    struct Node *next;
};

Node *head = new Node; // Make our Head

// Don't Focus at here as it work at our OS with Linked
// List too but i define it to get our year dynamically
time_t now = time(0);
tm *ltm = localtime(&now);
int first_value;  // Make the first data (input)
int counter;      // Make the first point of the year (input)
int srch_input;   // input the search value (opt)
int delete_input; // input the search value (opt)
char state; // input the state of Program (inptut)
char opt; // input the program option (opt , input)

void Check_status(); // Function Signature



void Crt_Frst_Nd(Node *head, int value)
{

    head->data = value; // In this step we create the value held by the first node it points from our head

    head->next = NULL; // After that we need our firts node points to Null as we dont have any node yet
}

void Insert_Nw_Nd(Node *head, int value)
{
    Node *newNode = new Node;

    newNode->data = value; // Append Data for our new Node
    newNode->next = NULL;  // Make Our New Node Point At Null as it will be the last Node

    Node *curr = head; // Make shadow from our head to point in last current Node in our List

    while (curr)
    {
        if (curr->next == NULL)
        {                         // Check if we arrived at the last Node or Not
            curr->next = newNode; // After that we will insert our node
            cout << "Your Node Inseted Successfully at location : " << curr->next << endl;
            return;
        }
        curr = curr->next; // make our current stop at our new node
    }
}

Node *Srch_Nd(Node *head, int value)
{

    Node *curr = head; // Make Shadow from our first element in the node to avoid lost our head

    while (curr)
    {
        if (curr->data == value)
        {                // check node step by step
            return curr; // return the adrress of our node
        }
        curr = curr->next; // sheft our shadow element to the next node
    }
}

void Dlt_Nd(Node *p, Node *head)
{

    // check if this node is exist or not
    if (p == NULL)
    {
        cout << "This Node Not Exist ! \n";
        return;
    }
    // this special case as this node will be the first node so we need change our head to the next node to save our list from losting
    if (p == head)
    {
        cout << "Node in location " << " -> " << head->next << " Deleted Successfully \n";
        cout << endl;
        head = p->next;
        delete p;
        return;
    }

    Node *curr = head; // Make Shadow from our first element in the node to avoid lost our head

    // we will make simple loop to  check node step by step and delete our target
    while (curr)
    {
        if (curr->next == p)
        {
            cout << "Node in location : " << curr->next << " Deleted Successfully \n";
            curr->next = p->next; // sheft our current to the next node
            delete p;             // affter that we will delete the node
        }
        curr = curr->next; // our count for the loop
    }
}

void Prnt_Nd(Node *head)
{
    Node *curr = head;

    while (curr)
    {
        cout << "Element at this Location : " << curr << " -> " << curr-> data << endl;
        curr = curr->next;
    }
}

void Ui()
{
    cout << "Welecome at my program I made this program with Single linked List\n";
    cout << endl;
    cout << "Press [i] to create and insert data in your linked list \n";
    cout << "Press [p] to display linked list \n";
    cout << "Press [d] to delete elemnt by value \n";
    cout << "Press [s] to search in linked list by value \n";

    cout << R"(

Made with Black Wolf
                        ,     ,
                        |\---/|
                       /  , , |
                  __.-'|  / \ /
         __ ___.-'        ._O|
      .-'  '        :      _/
     / ,    .        .     |
    :  ;    :        :   _/
    |  |   .'     __:   /
    |  :   /'----'| \  |
    \  |\  |      | /| |
     '.'| /       || \ |
     | /|.'       '.l \\_
   || ||             '-'

    )";

    cout << "Enter Your Option now : ";
}




void Options(char opt)
{
    switch (opt)
    {
    case 'i':
        cout << "Please Enter Your First Value of the node : \n";
        cin >> first_value;
        cout << endl;
        cout << "Please Enter The Start Point of Year : \n";
        cin >> counter;
        cout << endl;

        Crt_Frst_Nd(head, first_value); // create first node

        while (counter < 1900 + ltm->tm_year)
        {
            Insert_Nw_Nd(head, counter);
            counter++;
        }
      
        Check_status();
        break;
    case 'p':
        Prnt_Nd(head);
        Check_status();
        break;
    case 's':
        cout << "Please Enter The data to search in our List : \n";
        cin >> srch_input;
        cout << endl;
        cout <<"Your Node Located at " << " -> " << Srch_Nd(head, srch_input) << endl;
        cout << endl;
        Check_status();
        break;
    case 'd':
        cout << "Please Enter The data to Delete element  from  List : \n";
        cin >> delete_input;
        cout << endl;
        Dlt_Nd(Srch_Nd(head, srch_input), head);
        Check_status();
        break;

    default:
        cout << "Invalid Input";
        Check_status();
        break;
    }
}

void Check_status(){
    cout << "Press [N] Exist or [Y] to Continue : ";
    cin >> state;
    if(state == 'Y'){
         cout << "Enter Your Option now : ";
         cin >> opt;
        Options(opt);
    }
}


int main()
{
    Ui();
    cin >> opt;
    if (opt)
    {
       Options(opt);        
    }
    else
        cout << "Please Enter Valid Option !\n";
}