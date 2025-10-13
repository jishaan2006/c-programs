//5. Move all negative numbers to beginning and positive to end
#include<stdio.h>
int main(){
    int arr[100],c;
    printf("Enter Size of Array :\n");
    scanf("%d",&c);
    printf("Enter %d Elements :\n",c);

    for(int i=0;i<c;i++){
        scanf("%d",&arr[i]);
    }

    int p=0,n=0,z=0;
    for(int i=0;i<c;i++){
        if(arr[i]>0){
            p++;
        }
        else if(arr[i]<0){
            n++;
        }
        else{
            z++;
        }
    }

    int pos[p], neg[n], zero[z];
    int storep=0,storen=0,storez=0;
    for(int i=0;i<c;i++){
        if(arr[i]>0){
            pos[storep]=arr[i];
            storep++;
        }
        else if(arr[i]<0){
            neg[storen]=arr[i];
            storen++;
        }
        else{
            zero[storez]=arr[i];
            storez++;
        }
    }
    
    int answer[p+n+z];
    int x=0;
    for(int i=0;i<z;i++){
        answer[x]=zero[i];
        x++;
    }
    for(int i=0;i<n;i++){
        answer[x]=neg[i];
        x++;
    }
    for(int i=0;i<p;i++){
        answer[x]=pos[i];
        x++;
    }

    printf("\nSorted Array is :\n");
    for(int i=0;i<n+p+z;i++){
        printf("%d ",answer[i]);
    }
    return 0;
}