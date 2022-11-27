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

       void enque(int v)
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
       void deeque()
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
    cout<<"Insert Elements on Queue\n";
    q1.enque(5);
    q1.print();
    cout<<endl;
    q1.enque(6);
    q1.print();
    cout<<endl;
    q1.enque(7);
    q1.print();
    cout<<endl;
    q1.enque(8);
    q1.print();
    cout<<endl;

    cout<<"Delete Elements From Queue\n";
    q1.deeque();
    q1.print();
    cout<<endl;
    q1.deeque();
    q1.print();
    cout<<endl;
    q1.deeque();
    q1.print();
    cout<<endl;
    q1.deeque();
    q1.print();
    cout<<endl;
    q1.deeque();
    q1.print();
    cout<<endl;

    return 0;
}
