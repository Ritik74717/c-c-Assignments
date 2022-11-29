#include<iostream>
using namespace std;
class CircularQueue
{
  public:
      int q[5];
      int Front;
      int rear;
      int sizes;

      CircularQueue()
      {
          Front=-1;
          rear=-1;
          sizes=5;
      }
      void enque(int v)
      {
          if(rear==-1)
          {
              Front++;
              rear++;
              q[Front]=v;

          }
          else if((rear+1)%sizes==Front)
          {
              cout<<"Overflow\n";
          }
          else
          {
              rear=(rear+1)%sizes;
              q[rear]=v;
          }
      }
      void deeque()
      {
          if(Front==-1)
          {
              cout<<"UnderFlow\n";

          }
          else if(Front==rear)
          {
              cout<<q[Front]<<"deleted \n";
              Front=-1;
              rear=-1;
          }
          else
          {

              cout<<q[Front]<<" deleted\n ";
              Front=(Front+1)%sizes;
          }
      }
      void print()
      {
          int i=Front;
          if(Front==-1)
          {
              cout<<"Queue is Empty \n";
          }
          else
          {
              while(1)
              {
                  cout<<q[i]<<" ";
                  if(i==rear)
                    break;
                  i=(i+1)%sizes;
              }
              cout<<endl;
          }
      }

};
int main()
{
     CircularQueue q1;
     cout<<"Insertion on queue \n";
     q1.enque(5);
     q1.enque(6);
     q1.enque(7);
     q1.enque(9);
     q1.enque(10);
     q1.print();
     cout<<"\nCheck Queue is Full by inserting one more element\n";
     q1.enque(33);
     cout<<"\nDeleting Element from Queue\n";
     q1.deeque();
     q1.deeque();
     q1.deeque();
     return 0;

}
