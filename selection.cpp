#include<iostream>
using namespace std;

int main(){
    int n ,i ,j;
    printf("Enter the number of element in an array");
    scanf("%d",&n);
    printf("Enter the element in an array");
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int  i = 0; i < n; i++)
    {
        int min = arr[i];
        int pos = i;
        for(int j=0;j<i+1;j++){
            if(arr[j]<min){
                min=arr[j];
                pos = j;
            }
        }

        printf("After %d pass",i+1);
        for (int  l = 0; l < n; l++)
        {
            printf("%d",arr[l]);
        }
        printf("\n");
        arr[pos]=arr[i];
        arr[i]=min;
    }

        printf("Sorted array");
        for (int  i = 0; i <n; i++)
        {
            printf("%d",arr[i]);
        }
        
        

     
    
    
    return 0;
}