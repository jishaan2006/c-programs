#include<stdio.h>
int maxsumarr(int a[] ,int n,int k)
{
    int maxsum=0;
    for(int i=0;i<=n-k;i++)
    {
        int currentsum=0;
        for(int j=i;j<i+k;j++)
        {
            currentsum=currentsum+a[j];
        }
        if(currentsum>maxsum)
        {
            maxsum=currentsum;
        }

    }
    return maxsum; 
} 
int main()
{
    int a[100],n,k=3;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int ans=maxsumarr(a,n,k);
    printf("%d",ans);
}