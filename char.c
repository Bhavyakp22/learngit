#include<stdio.h>
#include<string.h>
#define max 100
int main()
{
int si=0,di=0;
char begin[]="*",end[]="*";
char src[max],dest[max];
printf("\n\n----------character stuffing----------------\n\n");
printf("enter the frame data in ASCII:\t");
gets(src);
strcpy(dest,begin);
di=strlen(begin);
while(src[si]!='\0')
{
if(src[si]=='*')
{

dest[di]='$',dest[di+1]='*';
si=si+1;
di=di+2;
}
else if(src[si]=='$')
{
    dest[di]='$',dest[di+1]='$';
    si=si+1;
    di=di+2;
}
else dest[di++]=src[si++];
}
dest[di]='\0';
strcat(dest,end);
printf("\n\n character stuffed frame is:\t%s",dest);
getchar();
}
