#include<stdio.h>
int fslide(int a[],int k)
{
    int slidesum=0;
    for(int i=0;i<k;i++)
    {
        slidesum=slidesum+a[i];
    }
    int maxsum=slidesum;
    for(int j=k;j<5;j++)
    {
        slidesum=slidesum+a[j]-a[j-k];
        if(slidesum>maxsum)
        {
            maxsum=slidesum;
        }
    }
    return maxsum;
}

int main()
{
    int k=3;
    int a[5]={7,4,7,11,3};
    int ans=fslide(a,k);
    printf("%d",ans);
}