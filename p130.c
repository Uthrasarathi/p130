#include<stdio.h>
#include<conio.h>
void main()
{
char s[10];
int i,c=0;
clrscr();
printf("Enter the string\n");
gets(s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
{
c++;
}
}
printf("%d",c);
getch();
}
