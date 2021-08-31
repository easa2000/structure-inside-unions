// Structure inside unions

#include<stdio.h>
typedef struct a
{
    char name[20];
    int marks;
};
typedef struct b
{
    int roll_no;
    int marks;
};
typedef union Student
{
    struct a A;
    struct b B;
};

int main()
{
    union Student s;
    char ch;
    system("cls");
    printf("\n Do you want to enter name or roll number of the student : (N / R): ");
    scanf("%c",&ch);
    if(ch == 'R')
    {
        printf("\n Enter the roll number: ");
        scanf("%d",&s.B.roll_no);
        printf("\n Enter the marks: ");
        scanf("%d", &s.B.marks);
    }
    else
    {
        printf("\n Enter the name: ");
        getchar();
        gets(s.A.name);
        printf("\n Enter the marks: ");
        scanf("%d",&s.A.marks);
    }

    printf("\n ****** STUDENT'S DETAILS ******");
    if(ch == 'R')
    {
        printf("\n Roll No: %d", s.B.roll_no);
        printf("\n Marks : %d",s.B.marks);
    }
    else
    {
        printf("\n Name: ");
        puts(s.A.name);
        printf("\n Marks: %d",s.A.marks);
    }
}
