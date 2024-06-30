#include<stdio.h>
#include<string.h>
char* mystrstr(char* ,char* );
void main()
{
	char str[20]="abcdef";
	char ss[20]="cd";
	char* res=mystrstr(str,ss);
	
if(res!=NULL)
	printf("%s",res);
else
	printf("Not found");
	
}
char* mystrstr(char* str,char* ss)
{

   int sslen=strlen(ss);
   int i,j,flag=0;
   for(i=0;str[i]!='\0';i++)
   {
   		if(str[i]==ss[0])
		{

		if(strncmp(&str[i],ss,sslen)==0)
			return &str[i];
			
//   			for(j=0;ss[j]!='\0';j++)
//   			{
//				if(str[i+j]!=ss[j])
//				{
//					flag=0;
//					break;
//				}
//			}			
   		}

   	
   }
		return NULL;
}
