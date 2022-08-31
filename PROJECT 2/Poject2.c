#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void printArray(char ar[3][3])
{
     int i,j;
    for(i=0;i<3;i++)
    {
        printf("------------\n|");
        for(j=0;j<3;j++)
        {
            printf(" %c |",ar[i][j]);
        }
        printf("\n");
    }
     printf("------------\n");
}
int validate(char ar[3][3])
{
    int i , a0[8]={0},aX[8]={0};
    for(i=0;i<3;i++)
    {
        if(ar[0][i]=='0')
        {
            a0[0]++;
        }
        if(ar[1][i]=='0')
        {
            a0[1]++;
        }
        if(ar[2][i]=='0')
        {
            a0[2]++;
        }

        if(ar[i][0]=='0')
        {
            a0[3]++;
        }
         if(ar[i][1]=='0')
        {
            a0[4]++;
        }
         if(ar[i][2]=='0')
        {
            a0[5]++;
        }

         if(ar[i][i]=='0')
        {
            a0[6]++;
        }
         if(ar[i][2-i]=='0')
        {
            a0[7]++;
        }
    }

     for(i=0;i<3;i++)
    {
        if(ar[0][i]=='X')
        {
            aX[0]++;
        }
        if(ar[1][i]=='X')
        {
            aX[1]++;
        }
        if(ar[2][i]=='X')
        {
            aX[2]++;
        }

        if(ar[i][0]=='X')
        {
            aX[3]++;
        }
         if(ar[i][1]=='X')
        {
            aX[4]++;
        }
         if(ar[i][2]=='X')
        {
            aX[5]++;
        }

         if(ar[i][i]=='X')
        {
            aX[6]++;
        }
         if(ar[i][2-i]=='X')
        {
            aX[7]++;
        }
    }
    for(i=0;i<8;i++)
    {
        if(a0[i]==3)
            return 1;
    }
    for(i=0;i<8;i++)
    {
        if(aX[i]==3)
            return 2;
    }
    return 0;

}


int main()
{
    system("cls");
    char ar[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    int flag = 1,position ,won,draw=0;
    char ch;

    while(1)
    {
        system("cls");
        printArray(ar);
        if(flag==1)
    {
        printf("\n Enter a number from 1 to 9 : for Player 1: ");
    }
    else
    {
        printf("\n Enter a number from 1 to 9 : for Player 2: ");
    }
    scanf("%d",&position);
    if(position >=1 && position <=9)
    {
        if(flag==1)
        {
            ch='0';
            flag=0;
        }
        else
        {
            ch='X';
            flag=1;
        }
        if(position>=1 && position<=3)
        {
            if(ar[0][position-1]!='0' && ar[0][position-1]!='X')
            {
                ar[0][position-1]=ch;
                draw++;
            }
            else
            {
                printf("\nInvalid Position please chose other position");
               if(ch=='X')
               {
                   flag=0;
               }
               else
               {
                   flag=1;
               }
                getch();
            }
        }
        else if(position>=4 && position<=6)
       {
            if(ar[1][position-4]!='0' && ar[1][position-4]!='X')
           {
            ar[1][position-4]=ch;
            draw++;
           }
           else
           {
                printf("\nInvalid Position please chose other position");
                 if(ch=='X')
               {
                   flag=0;
               }
               else
               {
                   flag=1;
               }
                getch();
           }

        }
        else // 7 t0 9
        {
            if(ar[2][position-7]!='0' && ar[2][position-7]!='X')
            {
                 ar[2][position-7]=ch;
                 draw++;
            }
             else
           {
                printf("\nInvalid Position please chose other position");
                 if(ch=='X')
               {
                   flag=0;
               }
               else
               {
                   flag=1;
               }
                getch();
           }

        }
         won = validate(ar);
         if(won==1)
         {
             system("cls");
             printArray(ar);
             printf("\nPLAYER 1 WON !");
             getch();

         }
         if(won==2)
         {
              system("cls");
             printArray(ar);
             printf("\nPLAYER 2 WON !");
             getch();

         }

         if(draw ==9 && won==0)
         {
            system("cls");
             printArray(ar);
             printf(" Game Draw !");
             getch();
         }
        if(won==1 || won==2 || (draw ==9 && won==0))
        {

            printf("\nEnter Y to Play Again or other key to exit: ");
            char playAgain;
            fflush(stdin);
            scanf("%c",&playAgain);
            if(playAgain=='Y'|| playAgain=='y')
            {
                int i;
                flag=1;
                draw=0;
                ar[0][0]='1';ar[0][1]='2',ar[0][2]='3';
                ar[1][0]='4';ar[1][1]='5',ar[1][2]='6';
                ar[2][0]='7';ar[2][1]='8',ar[2][2]='9';
                printf("\n You Choose to play Again :");
                printf("\nEnter any key to start the Game; ");
                getch();
            }
            else
            {
                break;
            }
        }

    }
    else
    {
        printf("\n Invalid position Enter a number from 1 to 9 only");
        getch();
    }

    }



    getch();
    return 0;

}

