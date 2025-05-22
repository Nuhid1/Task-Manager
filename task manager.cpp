#include<iostream>
using namespace std;

struct task
{
    public:
    int TaskId;
    task* priority;
    task (int value)
    {
        TaskId=value;
        priority=nullptr;
    }
};

struct dl
{
    int value;
    dl* pre;
    dl* next;
    dl (int v)
    {
       value=v;
       next=nullptr;
       pre =nullptr;
    }
};


    void insertion(dl* head1 ,task* head){
        cout << "inserting complete task "<<endl;

        dl* temp1 = head1;
    while (temp1->next != nullptr) {
        temp1 = temp1->next;
    }

  task* newNode=new task(temp1->value);
  if(head == nullptr){
    head=newNode;
    return;
}
   task* temp=head;
   while(temp->priority!=nullptr){
    temp=temp->priority;
}
temp->priority=newNode;
 cout << "inserting complete task "<<temp1->value<<endl;

}

void print(task* head){
    cout << "printing complete task : ";

task* temp=head;
while(temp!=nullptr){
    cout<<temp->TaskId<<"->";
    temp=temp->priority;

}
cout <<endl;
}



    void insertAtLast(dl* head, int value) {
        cout << "inserting active task at last " <<value <<endl;
    dl* n1 = new dl(value);
    if (head == nullptr) {
        head = n1;
        return;
    }
    dl* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = n1;
    n1->pre = temp;

    }
    void insertAtFirst(dl* &head, int value)
    {
        cout << "inserting task at first "<<value <<endl;
    dl* n2 = new dl(value);
    n2->next = head;
    if (head != nullptr)
        head->pre = n2;
    head = n2;
}

   void deleteAtFirst(dl* &head) {
       cout << "deleting 1st active task " <<endl;

    if (head == nullptr)
        return;
    dl* temp = head;
    head = head->next;
    if (head != nullptr)
        head->pre = nullptr;
    delete temp;
}

void deleteAtLast(dl* head) {
    cout << "deleting last active task " <<endl;
    if (head == nullptr)
    {
        return;
    }
    if (head->next == nullptr)
        {
            task* t1 =new task (head->value);
        delete head;
        head = nullptr;
        return;
        }
    dl* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->pre->next = nullptr;
    delete temp;
}

void HeadToTail(dl* head) {
    cout << "printing active task head to tail values : ";
    dl* temp = head;
    while (temp != nullptr) {
        cout << temp->value << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

void TailToHead (dl* head)
{
    cout << "printing active task tail to head values : ";
    if (head!=nullptr)
    {
        dl* temp=head;
    while (temp->next!=nullptr)
    {
        temp=temp->next;
    }
    while (temp!=nullptr)
    {
        cout << temp->value << " -> ";
        temp=temp->pre;
    }
    }

cout << endl;
}



int main ()
{
    // for active task
    dl* t1=new dl(1);
    dl* t2=new dl(2);
    dl* t3=new dl(3);
    dl* t4=new dl(4);
    dl* t5=new dl(5);

    t1->pre=nullptr;
    t1->next=t2;

     t2->pre=t1;
    t2->next=t3;

     t3->pre=t2;
    t3->next=t4;

     t4->pre=t3;
    t4->next=t5;

    t5->pre=t4;
    t5->next=nullptr;

    dl* head=t1;

    //complete task
    task* a1=new task (1);
    task* head1=a1;


    insertAtFirst(head,0);

    insertAtLast(head,6);
    HeadToTail(head);
    deleteAtFirst(head);
    insertion(head,head1);
    deleteAtLast (head);
    insertAtFirst(head,10);
    TailToHead(head);
    HeadToTail(head);
    deleteAtFirst(head);
    insertion(head,head1);
    deleteAtLast (head);
    TailToHead(head);
    HeadToTail(head);

    print(head1);

    return 0;
}

