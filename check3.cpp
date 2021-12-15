#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class node
{
public:
    int data;
    class node *next;
    class node *prev;
};

class dequeue: public node
{
    node *head,*tail;
    int top1,top2;
public:
    dequeue()
    {
        top1=0;
        top2=0;
        head=NULL;
        tail=NULL;
    }
    void Insert(int x)
    {
        node *temp;
        int ch;
        if(top1+top2 >=5)
        {
            cout <<"dequeue overflow \n";
            return ;
        }
        if( top1+top2 == 0)
        {
            head = new node;
            head->data=x;
            head->next=NULL;
            head->prev=NULL;
            tail=head;
            top1++;
        }
        else
        {
            cout <<" Add element to \n 1.FIRST \n 2.LAST\n Enter Your Choice:\n";
            cin >> ch;
            if(ch==1)
            {
                top1++;
                temp=new node;
                temp->data=x;
                temp->next=head;
                temp->prev=NULL;
                head->prev=temp;
                head=temp;
            }
            else
            {
                top2++;
                temp=new node;
                temp->data=x;
                temp->next=NULL;
                temp->prev=tail;
                tail->next=temp;
                tail=temp;
            }
        }
    }
    void Delete()
    {
        int ch;
        cout <<"Delete\n 1.First Node\n 2.Last Node\n Enter Your Choice:\n";
        cin >>ch;
        if(top1 + top2 <=0)
        {
            cout <<"\ndequeue under flow \n";
            return;
        }
        if(ch==1)
        {
            head=head->next;
            head->prev=NULL;
            top1--;
        }
        else
        {
            top2--;
            tail=tail->prev;
            tail->next=NULL;
        }
    }
    void display()

    {
        int ch;
        node *temp;
        cout <<"Display From\n 1.STARTING \n 2.ENDING\n Enter Your Choice\n";
        cin >>ch;
        if(top1+top2 <=0)
        {   
            cout <<"under flow\n";
            return ;
        }
        if (ch==1)
        {
            temp=head;
              cout<<"elements in dequeue are\n";
            while(temp!=NULL)
            {
               
                cout << temp->data <<" ";
                temp=temp->next;
            }
        }
        else
        {
            temp=tail;
              cout<<"elements in dequeue are\n";
            while( temp!=NULL)
            {
                 cout<<"elements in dequeue are\n";
                cout <<temp->data << " ";
                temp=temp->prev;
            }
        }
    }
};
int main()
{
    dequeue d1;
    int ch;
    while (1)
    {
   cout<<"\n";     
   cout<<"1) Insert element to dequeue"<<endl;
   cout<<"2) Delete element from dequeue"<<endl;
   cout<<"3) Display elements of dequeue"<<endl;
   cout<<"4) Exit"<<endl;

        
        cin >>ch;
        switch(ch)
        {
        case 1:
            cout <<"Enter the Element: \n";
            cin >> ch;
            d1.Insert(ch);
            break;
        case 2:
            d1.Delete();
            break;
        case 3:
           

            d1.display();
            break;
        case 4:
            exit(1);
            cout<<"exited\n";
        }
    }  return 0;
}