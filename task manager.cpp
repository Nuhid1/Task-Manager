#include<iostream>
using namespace std;

class task
{
public :
    int TaskID;
    task* Priority;

    task (int y)
    {
        TaskID=y;
        Priority = nullptr;
    }
};

class complete
{
    void insertion (task* head ,int k)
{
    task* n1=new task (k);
    if (head == nullptr)
    {
        head=n1;
        return;
    }
    else
    {
        task* temp=head;
        while (temp->Priority!=nullptr)
        {
            temp=temp->Priority;
        }
        temp->Priority=n1;
    }
}

void print(task* head)
{
    cout << "completed task are : ";
    task* t=head;
    while (t != nullptr)
    {
        cout << t->TaskID << " -> ";
       t =t->Priority;
    }
    cout<<endl;
}
};

class active
{
    public:

    class dlink
{
public:
    int value;
    dlink* pre;
    dlink* next;

    dlink (int k)
    {
        value=k;
        pre=nullptr;
        next=nullptr;
    }
};

dlink* head=nullptr;

bool  deleteAtLast(dlink* head){
    if (!head)
    {
        return false;
    }
 else
 {
     dlink* temp=head;
while(temp->next->next!=nullptr){
    temp=temp->next;
}
temp->next=nullptr;
return true;
}
 }

bool deleteAtFirst(dlink* head)
{
    if (!head)
    {
        return false;
    }
    else
    {
         head=head->next;
        return true;
    }
}

void insertionFirst ( int k)
{
        dlink* n1=new dlink (k);
        n1->next=head;
        head->pre=n1;
        head=n1;

};

void insertionLast ( int k)
{
    dlink* temp=head;
    while (temp->next=nullptr)
    {
        temp=temp->next;
    }
    dlink* n1=new dlink (k);
    temp->next=n1;
    n1->pre=temp;
}
void printHeadtoTail(dlink* head)
{
    cout << "printing head to tail : ";
    dlink* temp= head;
    while (temp != nullptr)
    {
        cout << temp->value << " -> ";
        temp =temp->next;
    }
    cout <<endl;
}
void printTailtoHead(dlink* head)
{
    cout << "printing tail to head : ";
    dlink* temp= head;
    while (temp!=nullptr)
    {
         temp=temp->next;
    }
    while (temp->pre != nullptr)
    {
        cout << temp->value << " -> ";
        temp =temp->pre;
    }
    cout <<endl;
}

};
int main ()
{
    task* t1=new task(1);
    task* t2=new task(2);
    task* t3=new task(3);
    task* t4=new task(4);


    complete completeTask;
    active activeTask;

    completeTask.insertion(t1,1);

    activeTask.insertionFirst(5);
    activeTask.insertionFirst(6);
    activeTask.insertionLast(7);
    activeTask.insertionLast(8);


    return 0;
}
