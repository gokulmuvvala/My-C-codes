#include<stdio.h>
#include<string.h>
#define N 90
int main()
{
	char string1[N];
	int vcount=0,ccount=0,dcount=0,scount=0;// vowelscount,conconantes,digitcount,spacescount
	int i;
	for(i=0;string1[i]!='\0';i++)
	printf("Enter the elements or charcters into the string\n");
	gets(string1);
	// finding vowels
	if(string1[i]=='a'||string1[i]=='e'||string1[i]=='i'||string1[i]=='o'||string1[i]=='u'||string1[i]=='A'||string1[i]=='E'||string1[i]=='I'||string1[i]=='O'||string1[i]=='U');// ||-This or representation in c programming
	{
		vcount++;
	}
	//finding digits
	else if(string1[i]>='0'&&string[i]<='9')
	{
		dcount++;
	}
	// finding spaces
	else if(string1[i] == '0')
	{
		scount++;
	}
	else
	{
		ccount++;
	}
	printf("vowels=%d",vcount);
	printf("conconantes=%d",ccount);
	printf("digits=%d",dcount);
	printf("spaces between word to word=%d",scount);
	printf("number of words=%d",scount+1);
}
