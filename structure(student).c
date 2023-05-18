#include<stdio.h>

struct students
{
	  int roll_no,std,age,id,number;
	  char name[100],course[100],city[100],school[100];
	  
}s[100];

main()
{
	
	
    int n,i;
    
	printf("enter total no. of students=");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)	
	{
		printf("enter student id=");
		scanf("%d",&s[i].id);
		
		printf("enter student name=");
		scanf("%s",&s[i].name);
		
		printf("enter student age=");
		scanf("%d",&s[i].age);
		
		printf("enter student course=");
		scanf("%s",&s[i].course);
		
		printf("enter student city=");
		scanf("%s",&s[i].city);
		
		printf("enter student standred=");
		scanf("%d",&s[i].std);
		
		printf("enter student school=");
		scanf("%s",&s[i].school);
	}
	printf("\n=======================================\n");
	
	for(i=0;i<n;i++)
	{
		printf("\nstudent roll no.=%d\n",s[i].roll_no);
		printf("student name=%s\n",s[i].name);
		printf("student age=%d\n",s[i].age);
		printf("student course=%s\n",s[i].course);
		printf("student city=%s\n",s[i].city);
		printf("student standred=%d\n",s[i].std);
		printf("student school=%s\n",s[i].school);
	}
}
