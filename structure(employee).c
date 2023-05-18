#include<stdio.h>

struct employe
{
	  int exp,age,id,number;
	  char name[100],role[100],city[100],comp[100];
	  
}e[100];

main()
{
	
	
    int n,i;
    
	printf("enter total no. of employees=");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)	
	{
		printf("enter employee id=");
		scanf("%d",&e[i].id);
		
		printf("enter employee name=");
		scanf("%s",&e[i].name);
		
		printf("enter employee age=");
		scanf("%d",&e[i].age);
		
		printf("enter employee role=");
		scanf("%s",&e[i].role);
		
		printf("enter employee city=");
		scanf("%s",&e[i].city);
		
		printf("enter employee experience=");
		scanf("%d",&e[i].exp);
		
		printf("enter employee company name=");
		scanf("%s",&e[i].comp);
	}
	printf("\n=======================================\n");
	
	for(i=0;i<n;i++)
	{
		printf("employee id no.=%d\n",e[i].id);
		printf("employee name =%s\n",e[i].name);
		printf("employee age=%d\n",e[i].age);
		printf("employee role=%s\n",e[i].role);
		printf("employee city=%s\n",e[i].city);
		printf("employee experience=%d\n",e[i].exp);
		printf("employee company name=%s\n",e[i].comp);
	}
}
