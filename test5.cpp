/// Eg- Trains specially engine (head) /// 

/* Deletion in Linked lists */

// #include <iostream>
// using namespace std; 
// struct node
// {
//     int data;
//     node *next;
// };
// class lists
// {
//     node *head, *tail;

// public:
//     lists()
//     {
//         head = NULL;
//         tail = NULL;
//     }
//     void insert(int item)
//     {
//         node *temp = new node;
//         temp->data = item;
//         temp->next = NULL;
//         if (head == NULL)
//         {
//             head = temp;
//             tail = temp;
//         }
//         else
//         {
//             tail->next = temp;
//             tail = temp;
//         }
//     }
//     void deletestart()
//     {
//         if (head == NULL)
//             cout << "Empty list! ";
//         else
//             head = head->next;
//     }
//     void deleteend()
//     {
//         node *cur, *temp;
//         temp = head;
//         while (temp->next != NULL)
//         {
//             cur = temp;
//             temp = temp->next;
//         }
//         cur->next = NULL;
//         tail = cur;
//     }
//     void deletepos(int pos)
//     {
//         node *cur, *pre;
//         cur = head;
//         for (int i = 1; i < pos; i++)
//         {
//             pre = cur;
//             cur = cur->next;
//         }
//         pre->next = cur->next;
//     }
//     void display()
//         {
//             node *temp;
//             temp = head;
//             temp = head;
//             if (head == NULL)
//             {
//                 cout << "List is empty \n";
//             }
//             else
//             {
//                 while (temp != NULL)
//                 {
//                     cout << temp->data << "-->";
//                     temp = temp->next;
//                 }
//             }
//         }
// };
// int main()
// {
//     lists obj;
//     cout<<"Starting list :\n";
//     obj.display();
//     cout<<"Inserting data in lists :\n";
//     obj.insert(100);
//     obj.insert(200);
//     obj.insert(300);
//     obj.insert(500);
//     obj.insert(10000);
//     obj.insert(600);
//     obj.insert(800);
//     obj.display();
//     obj.deletestart();
//     cout<<"\nDeleting first element from list :\n";
//     obj.display();
//     obj.deleteend();
//     cout<<"\nDeleting the last element from list : \n";
//     obj.display();
//     obj.deletepos(2);
//     cout<<"\nDeleting element from 2nd position: \n";
//     obj.display();
// }

    /* Insertion in Linked lists */

// #include <iostream>
// using namespace std;
// struct node
// {
//     int data;
//     node *next;
// };
// class lists
// {
//     node *head, *tail;

// public:
//     lists()
//     {
//         head = NULL;
//         tail = NULL;
//     }
//     void insert(int item)
//     {
//         node *temp = new node;
//         temp->data = item;
//         temp->next = NULL;
//         if (head == NULL)
//         {
//             head = temp;
//             tail = temp;
//         }
//         else
//         {
//             tail->next = temp;
//             tail = temp;
//         }
//     }
//     void insertFirst(int item)
//     {
//         node *temp = new node;
//         temp->data = item;
//         temp->next = head;
//         head = temp;
//     }
//     void insertpos(int item, int pos)
//     {
//         node *temp = new node;
//         temp->data = item;
//         node *cur, *prev;
//         cur = head;
//         for (int i = 1; i < pos; i++)
//         {
//             prev = cur;
//             cur = cur->next;
//         }
//         temp->next = cur;
//         prev->next = temp;
//     }
//     void display()
//     {
//         node *temp = head;
//         if (head == NULL)
//         {
//             cout << " List is empty \n";
//         }
//         else
//         {
//             while (temp != NULL)
//             {
//                 cout << temp->data << "-->";
//                 temp = temp->next;
//             }
//         }
//     }
// };
// int main()
// {
//     lists obj;
//     cout << "Displaying beginning list :\n";
//     obj.display();
//     cout << "\nDisplaying the list with data: \n";
//     obj.insert(2);
//     obj.insert(3);
//     obj.insert(4);
//     obj.insert(5);
//     obj.display();
//     cout << "\nAdding a first element in list :\n";
//     obj.insertFirst(10);
//     obj.display();
//     cout << "\nInserting a new node at 3rd position:\n";
//     obj.insertpos(700, 3);
//     obj.display();
// }


    /*Normal Link list */

#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
class lists
{
    node *head;

public:
    lists()
    {
        head = NULL;
    }
    void insertAtFirst(int val){
        node * p = new node;
        p->data = val;
        p->next = head;
    }
    void display()
    {
        node *temp = head;
        if (head == NULL)
        {
            cout << " List is empty \n";
        }
        else
        {
            while (temp != NULL)
            {
                cout << temp->data << "-->";
                temp = temp->next;
            }
        }
    }
};
int main()
{
    lists obj;
    obj.display();
    // obj.insert(10);
    // obj.insert(5);
    obj.insertAtFirst(10);
    obj.display();
    return 0;
}



// #include <bits\stdc++.h>
// using namespace std;

// class node{
//     public:
//         int data;
//         node *next;
//         node(int val){
//             data = val;
//             next = NULL;
//         }
// };

// void inseartATend(node *&head, int val){

//     node *n = new node(val);
//     node *temp = head;
//     if (head == NULL){
//         head = n;
//         return;
//     }
//     while (temp->next != NULL){
//         temp = temp->next;
//     }
//     temp->next = n;
//     n->next = NULL;
// }

// //void inseartATfront(int val){
// //    node* temp=new node(val);
// //    temp->data=val;
// //    temp->next=head;
// //    head=temp;
// //}

// void inseartATmiddle(node *&head,int val, int n){
//     node *p = new node(val);
//     node *temp1 = head;
//     for(int i = 0; i != n-1; i++){
//         temp1 = temp1->next;
//     }
//     p->data = val;
//     p->next = temp1->next; //temp-> next joins (chain) the p->next's node
//     p->next = temp1; //breaks the chain and p->next points to temp now
// }


// void display(node *head){
//     node *temp = head;
//     if (head == NULL){
//         cout << " List is empty \n";
//     }
//     while (temp != NULL){
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }

// int main(){
//     int a,b;
//     cout << "How many number you want to add : ";
//     cin >> b; //Number of nodes in list
//     node *head = NULL;
//     for (int i = 0; i < b; i++){
//         cout << "\nEnter the value : ";
//         cin >> a;
//         cout << "\nEntered Value is : "<<endl;
//         inseartATend(head, a);
//         display(head);
//         cout<<endl;
//     }
//     inseartATmiddle(head,71, 1); // given n should be befor insearting node
//     cout << "After inseart at middle : ";
//     display(head);

//     return 0;
// }