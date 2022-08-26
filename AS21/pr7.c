#include<stdio.h>
struct time
{
    int hrs;
    int min;
    int sec;
};

void dif_time(struct time t1,struct time t2 );

int main()
{
    struct time start,stop;
    printf("enter start time: hrs,min,sec\n");
    scanf("%d%d%d",&start.hrs,&start.min,&start.sec);

    printf("Enter stop time: hrs,min,sec\n");
    scanf("%d%d%d",&stop.hrs,&stop.min,&stop.sec);

    printf(" Start time : %d:%d:%d\n",start.hrs,start.min,start.sec);
    printf(" Stop time :  %d:%d:%d\n",stop.hrs,stop.min,stop.sec);
    dif_time(start,stop);
}
void dif_time(struct time start_time,struct time stop_time)
{

    struct time diff;
    while(stop_time.sec < start_time.sec)
    {
      --stop_time.min;
      stop_time.sec = stop_time.sec + 60;
    }
    diff.sec = stop_time.sec - start_time.sec;

    while(stop_time.min < start_time.min)
    {
        --stop_time.hrs;
        stop_time.min = stop_time.min + 60;
    }
    diff.min = stop_time.min - start_time.min;
    diff.hrs = stop_time.hrs - start_time.hrs;

    printf(" Difference = %d:%d:%d",diff.hrs,diff.min,diff.sec);

}


