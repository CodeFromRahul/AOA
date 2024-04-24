#include<stdio.h>
#include<string.h>
int main()
{
    int n ,i,j;
    printf("Enter the number of an element ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element of an array");
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        int min = arr[i];
        int pos =i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<min){
            min=arr[j];
            pos=j;
        }
    }
    printf("After %d passes",i+1);
    for(int l=0;l<n;l++){
        printf("%d",arr[l]);
    }
    printf("\n");

    arr[pos] =arr[i];
    arr[i]=min;
    }
    printf("sorted array is ");
    for(int i =0;i<n;i++){
        printf("%d",arr[i]);
    }


return 0;
}