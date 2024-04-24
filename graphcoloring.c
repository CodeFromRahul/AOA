#include<stdio.h>
#include<string.h>


void nextcolor(int k,int x[],int n,int graph[][n+1],int color){
    int j;
    while(1){
        x[k]=(x[k+1])%(color+1);
        if(x[k]==0){
          return;
        }
        for (int  j = 1; j <=n; j++)
        {
         if(graph[j][k]!=0&&x[k]==x[j]){
           break;
         }
        }
        if(j=n+1){
            return;

        }
    }
}

void graphColor(int k,int n,int x[],int graph[][n+1],int color){
    while (1)
    {
       nextcolor(k,x,n,graph,color);
       if(x[k]==0){
        return;
       }
       if(k==n){
        printf("Solution:{");
        for(int i =1;i<=n;i++){
            printf("%d",x[i]);
        }
        printf("}\n");
       }
       else{
        graphColor(k+1,n,x,graph,color);
       }
    }
    
}
        

int main()
{
    int vertices,color;
    printf("Enter the number of vertices");
    scanf("%d",&vertices);
    printf("Enter the number of colors");
    scanf("%d",&color);
    int graph[vertices+1][vertices+1];
    int solution[vertices+1];
    printf("Enter the adjencency matrix");
    for (int  i = 1; i <=vertices; i++)

    {
       for (int  j = 1; j <= vertices;j++)
       {
        scanf("%d",&graph[i][j]);
       }
       
    }
    graphColor(1,vertices,solution,graph,color);
    

    
return 0;
}