#include <iostream>
#include <stack>
#include<windows.h>
using namespace std;
void traverseList(int gender);
void insertList(int d);
void InsertAtRand(int data);
void deleteNode(int data);
void declinkedlist();
int counter = 1;
struct node{

    int seatNo;
    int data;
    node *next;
};


node *head;
node *temp;
node *n;

void insertList(int d){//-----------------------inserting

if(head==NULL){
n=new node;
n->data=d;
head=n;
temp=n;
head->next=NULL; }
else{
n=new node;
n->data=d;
temp->next=n;
temp=n;
n->next=NULL;}  }

void declinkedlist(){

for (int i=0;i<40;i++)
    insertList(0);     }


void InsertAtRand(int data){//-----------------Insert at random
    int newData;
    cout<<"Plz enter the data to insert\n";
    cin>>newData;
    temp=head;
while (true){
if(temp->data==data && temp->next!=NULL){
    node *newNode=new node;
    newNode->data=newData;
    newNode->next=temp->next;
    temp->next=newNode;}

if(temp->data==data && temp->next==NULL){
    node *newNode=new node;
    newNode->data=newData;
    newNode->next=NULL;
    temp->next=newNode;}


if(temp->next==NULL)
        break;

temp=temp->next;
}
}

void deleteNode(int data){
    temp=head;
    while(true){

     if(head->next==NULL && head->data==data){
         head=NULL; break;}
     else if(head->next!=NULL && head->data==data){
        head=head->next;
        temp=n;
        break;}
     else if(temp->next->data==data){
       temp->next=temp->next->next;
        temp=n;
        break;}

     temp=temp->next;
}//while ending
}//function ending


void traverseList(int gender){//-----------------------------traverse list

    int countt=1;
       temp=head;


       cout<<"\t\t                        _     \n";
       cout<<"\t\t                       | |      \n";
       cout<<"\t\t                     |     |      \n";
       cout<<"\t\t                   |         |      \n";
       cout<<"\t\t                 |             |      \n";
       cout<<"\t\t               |                 |      \n";
       cout<<"\t\t             |                     |      \n";
       cout<<"\t\t           |                         |      \n";
       cout<<"\t\t         |             PIA             |      \n";
       cout<<"\t\t       |                                 |   \n";
       cout<<"\t\t     |            SP20-BCS-135             |   \n";
       cout<<"\t\t   |                                         | \n";
       cout<<"\t\t |                                             |";
if(head==NULL){
    cout<<"\n----Linkedlist empty----\n\n"; }
else{

   cout<<endl;
while(temp!=NULL){
    temp->seatNo=counter;
    counter++;
   if(temp->data==0) {

   cout<<"\t\t<|     ";
   if(temp->seatNo < 10) {
         cout << "0";
   }
   cout << temp->seatNo;
   cout<<"      |>";}
   else{
   cout<<"\t\t<|"<<"   Booked    "<<"|>";

}

  if(countt%2==0){
    cout<<endl;

    cout<<endl;}
  countt++;

  temp=temp->next;}
     cout<<"\t\t |                                             |\n";
     cout<<"\t\t   |                                         |  \n";
     cout<<"\t\t     |                                     |   \n";
     cout<<"\t\t       |                                 |   \n";
     cout<<"\t\t         |                             |      \n";
     cout<<"\t\t           |                         |      \n";
     cout<<"\t\t             |                     |      \n";
     cout<<"\t\t               |                 |      \n";
     cout<<"\t\t_________________|             |_________________\n";
cout<<endl;
counter = 1;
temp=n;}//else
}



