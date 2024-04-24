#include<stdio.h>
#include<string.h>
int main()
{
    int n ,i ,j;
    printf("Enter the size of an array");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the element of an array");
    for(int i =0;i<n;i++){
    scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        j=i;
        while (j>0&&arr[j-1]>arr[j])
        {
           int temp=arr[j-1];
           arr[j-1]=arr[j];
           arr[j]=temp;
           j--;
        }
        printf("Array of %d pass",i+1);
         for (int l = 0; l<n; l++)
    {
       printf("%d",arr[l]);
    }

    printf("\n");
        
    }
   
   
    for(int i =0;i<n;i++){
        printf("%d",arr[i]);
    }


// return 0;
}