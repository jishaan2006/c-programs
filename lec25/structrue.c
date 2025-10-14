#include<stdio.h>
#include<string.h>
struct Student
{
    char name[500];
    int age;
    int roll;
};

int main(){
    struct Student s1;
    printf("Enter Name :\n");
    scanf("%s",s1.name);
    printf("Enter roll :\n");
    scanf("%d",&s1.roll);
    printf("Enter age :\n");
    scanf("%d",&s1.age);
    printf("Name : %s\n",s1.name);
    printf("Roll : %d\n",s1.roll);
    printf("Age : %d\n",s1.age);
}