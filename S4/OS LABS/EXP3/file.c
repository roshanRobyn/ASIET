#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <string.h>
int main(){
	int fd,fd2;
	char wbuff[128];
	char rbuff[128];
	fd=open("file.txt",O_RDWR);
	printf("enter the text to be written:");
	scanf("%s",wbuff);
	write(fd,wbuff,strlen(wbuff));
	close(fd);
	fd2=open("file.txt",O_RDWR);
	printf("THE CONTENTS AR:\n");
	read(fd2,rbuff,100);
	printf("%s\n",rbuff);
	close(fd2);
	return 0;
}

