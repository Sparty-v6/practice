#include <bits\stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node *next;
        node(int val){
            data = val;
            next = NULL;
        }
};
node *head = NULL;
node *temp = head;

void inseartATend(node *&head, int val){

    node *n = new node(val);
    node *temp = head;
    if (head == NULL){
        head = n;
        return;
    }
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

//void inseartATfront(int val){
//    node* temp=new node(val);
//    temp->data=val;
//    temp->next=head;
//    head=temp;
//}

void inseartATmiddle(node *&head,int val, int n){
    node *p = new node(val);
    node *temp1 = head;
    for(int i = 0; i != n-1; i++){
        temp1 = temp1->next;
    }
    p->data = val;
    p->next = temp1->next; //temp-> next joins (chain) the p->next's node
    p->next = temp1; //breaks the chain and p->next points to temp now
}


void display(node *head){
    node *temp = head;
    if (head == NULL){
        cout << " List is empty \n";
    }
    while (temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main(){
    int a,b;
    cout << "How many number you want to add : ";
    cin >> b; //Number of nodes in list
    node *head = NULL;
    for (int i = 0; i < b; i++){
        cout << "\nEnter the value : ";
        cin >> a;
        cout << "\nEntered Value is : "<<endl;
        inseartATend(head, a);
        display(head);
        cout<<endl;
    }
    inseartATmiddle(head,71, 1); // given n should be befor insearting node
    cout << "After inseart at middle : ";
    display(head);

    return 0;
}