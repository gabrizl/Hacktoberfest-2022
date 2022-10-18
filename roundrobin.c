// Round-robin

#include <stdio.h>
int main()
{
    int n,x,i, tq, total = 0,counter=0;
    
    printf(" -------Round-robin Scheduling ------\n");
    printf("\nEnter the No. of processes :");
    scanf("%d", &n);
    printf("Enter the time quanta: ");
    scanf("%d",&tq);
    int p[n], bt[n], wt[n], tat[n], ct[n],rem_bt[n],a[n];
    printf("\nEnter the Arrival time and Burst time of each process :\n");\
    
    for (int i = 0; i < n; i++)
    {
        printf("P[%d]: ",i+1);
        scanf("%d %d", &a[i], &bt[i]);
        rem_bt[i] = bt[i];
    }
    
    x=n;
    
    for(total = 0, i = 0; x != 0;)
      {
            if(rem_bt[i] <= tq && rem_bt[i] > 0)
            {
                  total = total + rem_bt[i];
                  rem_bt[i] = 0;
                  counter = 1;
            }
            else if(rem_bt[i] > 0)
            {
                  rem_bt[i] = rem_bt[i] - tq;
                  total = total + tq;
            }
            if(rem_bt[i] == 0 && counter == 1)
            {
                  x--;
                  printf("\n Process ID \t Burst Time \t Turnaround Time \t Waiting Time");
                  printf("\n Process[%d] \t\t %d \t\t %d \t\t  %d", i + 1, bt[i], total - a[i], total - a[i] - bt[i]);
                  wt[i] = wt[i] + total - a[i] - bt[i];
                  tat[i] = tat[i] + total - a[i];
                  counter = 0;
            }
            if(i == n - 1)
            {
                  i = 0;
            }
            else if(a[i + 1] <= total)
            {
                  i++;
            }
            else
            {
                  i = 0;
            }
      }
      int wait_time =0;
      int t_at = 0;
      for(int j =0; j<n;j++)
      {
          t_at = t_at +tat[i];
          wait_time = wait_time + wt[i];
      }
     
      return 0;
}




       


