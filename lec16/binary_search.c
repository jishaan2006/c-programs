#include<stdio.h>
int Bsearch(int a[],int res)
{
    int start=0;
    int end=9;
    while(start<=end){
        int mid=(start+end)/2;
        if(a[mid]==res){
            return mid;
        }
        else if(a[mid]<res){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;

}
int main()
{
    int res=7;
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int bs=Bsearch(a,res);
    if(bs!=-1){
        printf("Element found at a[%d]",bs);
    }
    else{
        printf("Element is not found");
    }
    
}