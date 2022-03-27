#include<bits/stdc++.h>
using namespace std;


class node
{
    public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};


void insertattail(node* &head,int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}



void display(node* head)
{
    node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}


node* reverseiterative(node* &mainhead,node* &head,int x)
{
    node* curr=head;
    node* ptr;
    node* prev=NULL;
    node* jod=mainhead;
    while(1)
    {
        if(x==0)
        {
            jod->next=NULL;
            break;
        }
        jod=jod->next;
        x--;
    }
    if(head==NULL)
    {
        cout<<"Empty list."<<endl;
        exit;
    }
    while(curr!=NULL)
    {
        ptr=curr->next;
        curr->next=prev;
        prev=curr;
        curr=ptr;
    }
    return prev;
}



void work(node* &head)
{
    node* f,*s,*h1,*h2;
    f=head;
    s=head;
    int c=-1;
    while(f->next && f->next->next)
    {
        f=f->next->next;
        s=s->next;
        c++;
    }
    if(f->next)
    {
        s=s->next;
        c++;
    }
    h1=head;
    h2=reverseiterative(head,s,c);
    node* temp=NULL;
    node* ptr=h2;
    while(h2->next)
    {
        temp=h2->next;
        h2->next=h1;
        h1=h1->next;
        h2=h2->next;
        h2->next=temp;
        h2=h2->next;
    }
    temp=h2->next;
    if(h1)
    {
        h2->next=h1;
        h2=h2->next;
    }
    if(h2)
    {
        h2->next=temp;
    }
    head=ptr;
}


int main()
{
    node* head = NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertattail(head,5);
    // insertattail(head,6);
    // insertattail(head,7);
    // insertattail(head,8);
    cout<<"Input  :"<<endl;
    display(head);
    work(head);
    cout<<"Output  :"<<endl;
    display(head);
}