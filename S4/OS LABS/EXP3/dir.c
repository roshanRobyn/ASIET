#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
void main()
{
	DIR *dir;
	struct dirent *ptr;
	char dir_name[50];
	printf("enter the directory name:");
	scanf("%s",dir_name);
	dir=opendir(dir_name);
	while((ptr=readdir(dir))!=NULL)
	printf("%ld\t%s\n",ptr->d_ino,ptr->d_name);
	closedir(dir);
	}
