#include<stdio.h>
#include<stdlib.h>
struct student
{
   char name[20];
   int roll;
   char department[20];
};
void main()
{
    struct student s[5];
    for(int i=0;i<5;i++)
    {   
        
        printf("Enter name , department, roll for student %d:\n",(i+1));
        gets(s[i].name);
        fflush(stdin);
        gets(s[i].department); 
        fflush(stdin);
       scanf("%d",&s[i].roll); 
        fflush(stdin);
       
    }

    for(int i=0;i<5;i++)
    {   
       printf("\n\nStudent %d:\n",1+i);    
       printf("name is : %s\nroll no is : %d\ndepartment is : %s",s[i].name,s[i].roll,s[i].department);
    }

}