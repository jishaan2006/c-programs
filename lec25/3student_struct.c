#include<stdio.h>
#include<string.h>
struct Student
{
    char name[500];
    int age;
    int roll;
};
int main(){
    struct Student s1[3];
    printf("Enter Details :\n");
    for(int i=0;i<3;i++){
        printf("Enter Student %d Name : ",i+1);
        scanf("%s",s1[i].name);
    }
    for(int i=0;i<3;i++){
        printf("Enter Student %d Age : ",i+1);
        scanf("%d",&s1[i].age);
    }
    for(int i=0;i<3;i++){
        printf("Enter Student %d Roll Num : ",i+1);
        scanf("%d",&s1[i].roll);
    }


    for(int i=0;i<3;i++){
        printf("Student %d Name : ",i+1);
        printf("%s\n",s1[i].name);
        printf("Student %d Age : ",i+1);
        printf("%d\n",s1[i].age);
        printf("Student %d Roll num : ",i+1);
        printf("%d\n",s1[i].roll);
        printf("\n");
}}