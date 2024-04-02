#include <stdio.h>
#include <stdlib.h>

struct inform{
char name[25];
char lastName[25];
char jobInfo[25];
} personel1;

int main(){
	
char name[25], lastName[25], jobInfo[25];
FILE *file;
file = fopen("file_name.txt","w");
printf("please enter your name: ");
scanf("%s",name);
printf("please enter your last name: ");
scanf("%s",lastName);
printf("please enter your job information: ");
scanf("%s",jobInfo);
fprintf(file,"%s\n",name);
fprintf(file,"%s\n",lastName);
fprintf(file,"%s\n",jobInfo);

return 0;
}