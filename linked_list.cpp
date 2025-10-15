#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
#define null 0
using namespace std;

 struct node
{
  int data;
  node *next;
};
node *first,*temp,*ttemp;

void init()
{
 first=temp=ttemp=null;
}
void addnode(int val)
{
  temp=first;
  while(temp->next!=null)
  {
  temp=temp->next;

  }
  ttemp=new node;
  ttemp->data=val;
  ttemp->next=null;
  temp->next=ttemp;
}
void createfirst(int val)
{
 first=new node;
  first->data=val;
  first->next=null;
}
void disp()
{
 temp=first;
 while(temp!=null)
 {
   cout<<temp->data<<endl;
   temp=temp->next;
 }
}
int main()
{
  int n,c;
  cout<<"Enter number of Elements : "<<endl;
  cin>>n;
  cout<<"Enter  1st Element : "<<endl;
  cin>>c;
  createfirst(c);
	for(int i=1;i<n;i++){
    cout<<"Enter Element "<<i+1<<" :";
    cin>>c;
    addnode(c);
  }
  cout<<"Elements are :"<<endl;
	disp();
}

