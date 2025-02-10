#include <stdio.h>
void main(){
 	int p[20],wt[20],tt[20],bt[20],at[10],ct[20],pr[20],n;
 	printf("enter the number the process: ");
 	scanf("%d",&n);
 	for(int i=0;i<n;i++){
 		printf("enter the process id: ");
 		scanf("%d",&p[i]);
 		printf("enter the arrival time: ");
 		scanf("%d",&at[i]);
 		printf("enter the burst time: ");
 		scanf("%d",&bt[i]);
 		printf("enter the priority: ");
 		scanf("%d",&pr[i]);
 	}
 	int tp[20];
 	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(pr[i]>pr[j]){
				int temp=bt[i];
				bt[i]=bt[j];
				bt[j]=temp;
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
				temp=at[i];
				at[i]=at[j];
				at[j]=temp;
				temp=pr[i];
				pr[i]=pr[j];
				pr[j]=temp;
			}
			}
		}
			
 	ct[0]=bt[0];
 	tt[0]=ct[0]-at[0];
 	wt[0]=tt[0]-bt[0];
 	for(int i=1;i<n;i++){
 		ct[i]=bt[i]+ct[i-1];
 		tt[i]=ct[i]-at[i];
 		wt[i]=tt[i]-bt[i];
 		if(wt[i]<0){
 			wt[i]=-1*wt[i];
 			}
 		if(tt[i]<0){
 			tt[i]=-1*tt[i];
 			}
 	}
 	printf("Gantt Chart");
 	printf("-------------------------------------------------------------------\n");
 	for(int i=0;i<n;i++){
 		printf("|\t%d\t|",p[i]);
 		}
 	printf("\n");
 	printf("0|");
 	for(int i=0;i<n;i++){
 		printf("\t\t%d|",ct[i]);
 		}
 	printf("\n");
 	printf("-------------------------------------------------------------------\n");
 	
 	printf("PID\tARVL\tBRST\tPRTY\tCOMP\tTURN\tWAIT\n");
 	for(int i=0;i<n;i++){
 		printf("%d\t%d\t%d\t%d\t%d\t%d\t%d",p[i],at[i],bt[i],pr[i],ct[i],tt[i],wt[i]);
 		printf("\n");
 	}
 	float sumtt=0;
 	float sumwt=0;
 	float avgtt;
 	float avgwt;
 	for(int i=0;i<n;i++){
 		sumtt=sumtt+tt[i];
 		sumwt=sumwt+wt[i];
 	}
 	avgtt=sumtt/n;
 	avgwt=sumwt/n;
 	printf("THE AVG TURNAROUND TIME= %f",avgtt);
 	printf("\n");
 	printf("THE AVG WAITING= %f",avgwt);
 	
}
 	
 	
 		
 		
 		
