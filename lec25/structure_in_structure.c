#include<stdio.h>
#include<string.h>
struct address
{
    int pincode;
};
struct  student
{
    char name[500];
    int age;
    int roll;
    struct address s2;//nested structure.
};

int main(){
    struct student s1;
    printf("Enter Pincode :\n");
    scanf("%d",&s1.s2.pincode);
    printf("Pincode :\n");
    printf("%d",s1.s2.pincode);
    
}