#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node * next;
};

void inseartATend(node** head, int val){
    node* n = new node; 
    node *temp = *head; 

    n->data = val;  
    n->next = NULL;  

    if (*head == NULL){
        *head = n;  
        return;  
    }
    while (temp->next != NULL)  
        temp = temp->next;  

    temp->next = n;  
    return;  
}

void inseartATmiddle(node * head, int val, int n){
    node *ptr = new node;
    node *p = head;

    for(int i = 0; i < n - 1; i++){
        p = p->next;
    }
    ptr->data = val;
    ptr->next = p->next;
    p->next = ptr;
}

void display(node * head){
    node * temp = head;
    if(head == NULL){
        cout<<"List is empty\n";
    }
    while (temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    node * head = NULL;
    int a,b;
    cout << "How many number you want to add : ";
    cin >> b; 
    for (int i = 0; i < b; i++){
        cout << "\nEnter the value : ";
        cin >> a;
        cout << "\nEntered Value is : "<<endl;
        inseartATend(&head, a);
        display(head);
        cout<<endl;
    }
    inseartATmiddle(head,71, 1); 
    cout << "After inseart at middle : ";
    display(head);
    return 0;
}
