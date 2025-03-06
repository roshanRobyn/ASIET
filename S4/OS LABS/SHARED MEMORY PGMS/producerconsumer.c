#include<stdio.h>
#include<stdlib.h>
int mutex=1,full=0,empty=3,x=0;
int signal(int s){
	return(++s);
	}
int wait(int s){
	return(--s);
	}
int producer(){
	empty=wait(empty);
	mutex=wait(mutex);
	x++;
	printf("the producer has produced product %d \n",x);
	mutex=signal(mutex);
	full=signal(full);
}

int consumer(){
	full=wait(full);
	mutex=wait(mutex);
	printf("the consumer has consumed product %d \n",x);
	x--;
	mutex=signal(mutex);
	empty=signal(empty);
}

void main(){
	int n;
	while(1){
		printf("1.producer\n2.consumer\n2.exit\n");
		printf("enter the choice:");
		scanf("%d",&n);
		switch(n){
			case 1:
				if ((mutex==1) && (empty!=0)){
					producer();}
				else{
					printf("\n buffer is full");}
				break;
			case 2:
				if ((mutex==1) &&(full!=0)){
					consumer();}
				else{
					printf("\n buffer is empty");}
				break;
			case 3:
				exit(0);
				break;
			}
		}
	}
