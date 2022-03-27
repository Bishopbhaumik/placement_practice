#include<iostream>
using namespace std;
class node {
    public:
    int data;
    class node* next;

    node() {
        data = 0;
        next = NULL;
    }

    node(int x) {
        data = x;
        next = NULL;
    }
};
void ins(node* &head, int x) {
    if(head == NULL) {
        head = new node(x);
        return;
    }
    node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = new node(x);
}
void dis(node *head) {              //??
    node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void rev(node* &head) {
    node* curr = head;
    node* next = NULL;
    node* prev = NULL;
    while(curr!= NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}

void order(node* &head){
     node* temp=head;
     node* fast=head;
     int count=0;
     while(temp!=NULL)
     {
         count++;
         temp=temp->next;
     }
    if(count %2 ==0){
        
    }
}

int main() {
    node* head = NULL;
    for(int i = 0; i < 10; i++)
        ins(head, 100-i*10);
    dis(head);
    order(head);
    cout<<endl;
    //Write code to reverse the linked list
    rev(head);
    dis(head);
}