#include<stdio.h>
#define N 4

int main() 
{
    int bt[N]={6,8,7,3};
    int p[N]={1,2,3,4};
    int wt[N],tat[N],temp;
   for(int i=0;i<N;i++){
    for(int j=0;j<N-i-1;j++){
    if (bt[j]>bt[j+1]){
    temp=bt[j];
    bt[j]=bt[j+1];
    bt[j+1]=temp;
    temp=p[j];
    p[j]=p[j+1];
    p[j+1]=temp;
    }
    }
    }
    wt[0]=0;
  
    for(int i = 1; i < N; i++) {
       wt[i]=0;
        for (int j=0;j<i;j++)
        wt[i]+=bt[j];
    }

    for(int i = 0; i < N; i++) {
    tat[i]=bt[i]+wt[i];
    }

   printf("--shortest job First (SJF) Scheduling---\n");
    printf("\nPROCESS\tBURST TIME\tARRIVAL TIME\tWAITING TIME\tTURNAROUND TIME\n");
    for(int i = 0; i < N; i++) {
        printf("p%d\t%d\t\t%d\t\t%d\n",p[i],bt[i],wt[i],tat[i]);
        }
   float avg_wt=0,avg_tat=0;
    for(int i = 0; i < N; i++) {
    avg_wt+=wt[i];
    avg_tat+=tat[i];
    }
    avg_wt/=N;
    avg_tat /=N;
    
    printf("\nAverage Waiting Time: %.2f", avg_wt);
    printf("\nAverage Turnaround Time: %.2f", avg_tat);
    return 0;
}

