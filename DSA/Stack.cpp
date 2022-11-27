
#include<iostream>
using namespace std;
#include<stdlib.h>
#include<conio.h>

class Stack
{
    public:
    int a[100];
    int top;
      Stack()
      {
          top=-1;
      }
      void push(int value)
      {
          if(isFull())
          {
              cout<<"Stack is Full"<<endl;
          }
          else
          {
             top++;
             a[top]=value;
          }
      }
      int pop()
      {
          if(isEmpty())
          {
              cout<<"Stack is Empty"<<endl;
              cout<<"Press Any Key To Continue\n";
              getch();
          }
          else
          {
              top--;
              return a[top+1];
          }
      }
      int isEmpty()
      {
          if(top==-1)
            return 1;
          else
            return 0;
      }
      int isFull()
      {
          if(top==99)
            return 1;
          else
            return 0;
      }
      int topElement()
      {
           if(isEmpty())
          {
              cout<<"Stack is Empty"<<endl;
          }
          else
          {
              return a[top];
          }
      }
      int sizes()
      {
          return top+1;
      }
      void showStack()
      {
          int i;
          cout<<"Stack Element are :\n";
          for(i=sizes()-1;i>=0;i--)
          {
              cout<<a[i]<<endl;
          }
      }
};
int main()
{
    Stack s1;
    int choice;
    while(1)
    {
         system("CLS");
        cout<<"1: Push()"<<endl;
        cout<<"2: Pop()"<<endl;
        cout<<"3: Top()"<<endl;
        cout<<"4: isFull()"<<endl;
        cout<<"5: isEmpty()"<<endl;
        cout<<"6: GetSize()"<<endl;
        cout<<"7: ShowStack()"<<endl;
        cout<<"8: Exit()"<<endl;
        cout<<"Enter Your Choice\n";
        cin>>choice;

        switch(choice)
        {

        case 1:
            {
                int value;
                cout<<"Enter a Number\n";
                cin>>value;
                s1.push(value);
                break;
            }
        case 2:
            {
                s1.pop();
                break;
            }
        case 3:
            {
                if(s1.isEmpty())
                {
                    cout<<"Top = -1 \n";
                }
                else
                cout<<"Top value is "<<s1.topElement()<<endl;
                cout<<"Press Any Key To Continue\n";
                getch();
                break;
            }
        case 4:
            {
                if(s1.isFull())
                {
                    cout<<"Stack is Full\n";
                    cout<<"Press Any Key To Continue\n";
                    getch();
                }
                else
                {
                    cout<<"Stack is Not Full\n";
                    cout<<"Press Any Key To Continue\n";
                    getch();
                }
                break;
            }
        case 5:
            {
                if(s1.isEmpty())
                {

                    cout<<"Stack is Empty\n";
                    cout<<"Press Any Key To Continue\n";
                    getch();
                }
                else
                {
                    cout<<"Stack is not Empty\n";
                    cout<<"Press Any Key To Continue\n";
                    getch();
                }
                break;
            }
        case 6:
            {
                cout<<" Size = "<<s1.sizes()<<endl;
                cout<<"Press Any Key To Continue\n";
                getch();
                break;
            }
        case 7:
            {
                s1.showStack();
                cout<<"Press Any Key To Continue\n";
                getch();
                break;
            }
        case 8:
            {
                exit(0);
            }
        default:
            {
                cout<<"Invalid Choice\n";
            }
        }



    }

}

