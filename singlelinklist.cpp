#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;

};

class Single{
    private:

node *head,*temp,*temp1;
int key,num,delnum;

public:

Single(){
    head=temp=temp1=NULL;


}
void add()
{
    bool check= false;
    if (head== NULL)
    {
        head= new node;

        cout<<"Enter element: ";
        cin>>head->data;
        head->next=NULL;

    }
    else if (head!=NULL)
    {
        cout<<"What you want to add: ";
        cin>>num;
        cout<<"After which element you want to add: ";
        cin>>key;
        temp=head;
        while(temp!=NULL)
        {
            if (temp->data == key)
            {
                temp1 = new node;
                temp1->data=num;
                temp1->next=temp->next;
                temp->next=temp1;
                cout<<"Element Added sucessfully"<<endl;
                check = true;

            }
            temp=temp->next;
        }
        if (check == false)
        {
            cout<<"Key not found";

        }

    }
}
void print()
{
    temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
}

void remove()
{
    bool check=false;
    cout<<"Which element you want to delete: ";
    cin>>delnum;
    temp = head;
    if (head==NULL)
    {
        cout<<"link list is empty: "<<endl;

    }
    else if (head!=NULL)
    {
        if (head->data==delnum)
        {
            head=head->next;
            delete temp;
            temp=NULL;
        }

        while (temp!=NULL)
        {
            if(temp->next!=NULL)
            {
                if (temp->next->data==delnum)
                {
                    temp1=temp->next;
                    temp->next=temp->next->next;
                    delete temp1;
                    temp1=NULL;
                    check =true;
                }
                temp=temp->next;
            }
            
        }
        
    }
    if(check==false)
        {
            cout<<"Element not found"<<endl;
        }

}

};
int main()
{
    Single s;
    int select;
    //cout<<"Enter option"<<endl;
    do
    {
        cout<<"Enter options"<<endl;
        cin>>select;
        if(select==1)
            s.add();
        if(select==2)
            s.print();
        if(select==3)
            s.remove();
    }
    while(select!=4);

}



