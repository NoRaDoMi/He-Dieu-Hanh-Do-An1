#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_LEN 80
char *a=NULL;
char *HISTORY[MAX_LEN];
int count=0;

void set(char x[])
{
	a=x;
}//Hàm lưu user command trước đó

char* get()
{
return a;
}//Trả về giá trị user command trước đó
void get_history()
{
int i;
for(i=0;i<count;i++)
{
	printf("%d) %s\n",i+1,HISTORY[i]);
}
}	//Hàm in ra các lệnh trong history 
void set_history(char input[])
{
int len=strlen(input);
HISTORY[count]=(char *)malloc(sizeof(char)*len+1);
strcpy(HISTORY[count],input);
//HISTORY[count]='\0';
count++;

}//Hàm lưu các lệnh vào history



