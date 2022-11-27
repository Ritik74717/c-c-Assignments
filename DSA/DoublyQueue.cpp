
#include<iostream>
using namespace std;
class Queue
{
   public:
       int q[100];
       int Front;
       int rear;
       int sizes;

       Queue()
       {
           Front=-1;
           rear=-1;
           sizes=100;
       }

       void insertAtEnd(int v)
       {
           if(rear==sizes-1)
           {
               cout<<"OverFlow\n";
           }
           else if(Front==-1 && rear==-1)
           {
               Front++;
               rear++;
               q[rear]=v;
           }
           else
           {
               rear++;
               q[rear]=v;
           }
       }
       void deleteAtFront()
       {
           if(Front==-1)
           {
               cout<<"Underflow\n";
           }
           else if(Front==rear)
           {
               cout<<q[Front]<<" deleted "<<endl;
               Front=-1;
               rear=-1;
           }
           else
           {
               cout<<q[Front]<<" deleted "<<endl;
               Front++;
           }
       }
       void insertAtFront(int v)
       {
           if(rear==sizes-1)
           {
               cout<<"Overflow\n";
           }
           else if(Front==-1)
           {
               Front++;
               rear++;
               q[Front]=v;
           }
           else
           {
               int i;
               for(i=rear;i>=Front;i--)
               {
                   q[i+1]=q[i];
               }
               rear++;
               q[Front]=v;

           }
       }
       void DeleteAtEnd()
       {
           if(Front==-1)
           {
               cout<<"Underflow\n";
           }
           else if(Front==rear)
           {
               cout<<q[rear]<<" deleted\n";
               Front=-1;
               rear=-1;
           }
           else
           {
               cout<<q[rear]<<" deleted\n";
               rear--;
           }
       }
       void print()
       {
           int i;
           if(Front==-1)
           {
               cout<<"Queue is Empty\n";
           }
           else
           {
            for(i=Front;i<=rear;i++)
            {
               cout<<q[i]<<" "<<endl;
            }
           }
       }
};
int main()
{
    Queue q1;
    cout<<"InsertionAtEnd on Doubly Queue\n";
    q1.insertAtEnd(5);
    q1.insertAtEnd(3);
    q1.insertAtEnd(6);
    q1.print();
    cout<<endl;

    cout<<"InsertionAtFront on Doubly Queue\n";
    q1.insertAtFront(10);
    q1.insertAtFront(20);
    q1.print();
    cout<<endl;

    cout<<"DeletionAtEnd on Doubly Queue\n";
    q1.DeleteAtEnd();
    q1.print();
    cout<<endl;

    cout<<"DeletionAtFront on Doubly Queue\n";
    q1.deleteAtFront();
    q1.print();

    return 0;
}
