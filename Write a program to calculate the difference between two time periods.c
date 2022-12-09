#include<stdio.h>
struct time{
	int sec;
	int min;
	int hrs;
};
void diff_bw_time(struct time start,struct time stop,struct time *diff);
int main()
{
	struct time start_time,stop_time,diff;
	printf("Enter the start time.\n");
	printf("Enter the hours , minutes and seconds \n");
	scanf("%d %d %d",&start_time.hrs,&start_time.min,&start_time.sec);
	
	printf("Enter the end time.\n");
	printf("Enter the hours , minutes and seconds\n");
	scanf("%d %d %d",&stop_time.hrs,&stop_time.min,&stop_time.sec);
	
	diff_bw_time(start_time,stop_time,&diff);
	
	printf("\ntime diff in between %d : %d : %d",start_time.hrs,start_time.min,start_time.sec);
	printf("\n and %d : %d : %d",stop_time.hrs,stop_time.min,stop_time.sec);
	printf("\n is %d : %d : %d",diff.hrs,diff.min,diff.sec);
	
	
	
}
void diff_bw_time(struct time start,struct time stop,struct time *diff)
{
	while(start.sec>stop.sec)
	{
		--stop.min;
		stop.sec+=60;
	}
	diff->sec=stop.sec-start.sec;
	while(start.min>stop.min)
	{
		--stop.hrs;
		stop.min+=60;
	}
	diff->min=stop.min-start.min;
	diff->hrs=stop.hrs-start.hrs;
}