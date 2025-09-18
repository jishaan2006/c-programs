#include<stdio.h>
int main()
{
    int a[100],n,maxsum=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int currsum=0;
        for(int j=i;j<n;j++){
            currsum+=a[j];
            if(currsum>maxsum){
                maxsum=currsum; 
            }
        }
    }
    printf("%d",maxsum);
}
