#include<stdio.h>
#include<string.h>

void findsubset(int arr[],int size,int sum);
void findsubsetutils(int arr[],int size,int sum,int index,int subset[]);

void findsubset(int arr[],int size,int sum){
    int subset[size];
    findsubsetutils(arr,size,sum,0,subset);
}

void findsubsetutils(int arr[],int size,int sum,int index,int subset[]){
    if(sum==0){
        printf("THe solution is :");
        for(int i =0;i<size;i++){
            printf("%d",subset[i]);
        }
        printf("\n");
        return;
    }
    if(index==size||sum<0){
        return;
    }
    subset[index]=1;
    findsubsetutils(arr,size,sum-arr[index],index, subset);
    subset[index]=0;
    findsubsetutils(arr,size,sum,index+1, subset);

}

int main()
{
    int size;
    printf("Enter the size of element");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the element in an array");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int sum;
    printf("Enter the sum to be obtained");
    scanf("%d",&sum);
    findsubset(arr,size,sum);
return 0;
}