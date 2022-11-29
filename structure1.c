#include<stdio.h>
struct student_record
{
    char name[100];
    int sapid;
    int rollno;
    char db[100];
    char dr[100]; 
    struct date
    { 
        int day;
        int month; 
        int year;
        }
    c;
};
int main()
{ 
    int n;
    printf("Enter number of students:");
    scanf("%d", &n);
    struct student_record s[n]; 
    for(int i=0;i<n;i++)
    {  
        printf("Enter the name of student %d: ",(i+1)); 
        scanf("%s",s[i].name);
        printf("Enter sap id of the student %d: ", (i+1)); 
        scanf("%d", &s[i].sapid);
        printf("Enter enrollment no. of student %d:", (i+1)); 
        scanf("%d",&s[i].rollno);
        printf("Enter date of registration of student %d (in dd/mm/yyyy):",(i+1));
        scanf("%s",s[i].dr); 
        printf("Enter date of birth of student %d in (dd/mm/yyyy): ", (i+1));
        scanf("%s", s[i].db); 
        printf("Enter date of joining of student %d (in dd):", (i+1)); 
        scanf("%d",&s[i].c.day); 
        printf("Enter month of joining of student %d (in mm) : ", (i+1));
        scanf("%d",&s[i].c.month);
        printf("Enter year of joining of student %d (in yyyy) ",(i+1)); 
        scanf("%d",&s[i].c.year);
        printf("\n");
        }
    for(int j=0;j<n;j++)
    {
        printf("%d \t%s \t%d \t%d \t%s \t%s \t%d/%d/%d\n", (j+1),s[j].name,s[j].sapid, s[j].rollno, s[j].dr, s[j].db, s[j].c.day, s[j].c.month,s[j].c.year);
        }
    return 0;
}