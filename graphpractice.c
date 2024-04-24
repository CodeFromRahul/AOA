#include<stdio.h>
#include<string.h>

void color(int k,int x[],int n,int graph[][n+1],colors){
    int j;
    while(1){
        x[k]=(x[k]+1)%(colors+1);
        if(x[k]==0){
            return;
        }

        for(int j=0;j<n;j++){
            if(graph[k][j]!=0&&x[k]==x[j]){
               break;
            }
           
        }
            if(j=n+1){
                return;
            }
    }
}

void graphColoring(int k;int n; int x[];int graph[][n+1];int colors){
    while (1)
    {
        if(x[k]==0){
            return;
        }
    if(k==n){
        printf("solution:{\n");
        for(int i=0;i<n;i++){
            printf("%d",x[i]);
        }
        printf("}");
    }
    else{
        graphColoring(k+1;n;x;graph;colors);
    }
    }
    
}
int main()
{
    int vertices,color;
    printf("Enter the number of vertices");
    scanf("%d",&vertices);
    printf("Entr teh number of color ");
    scanf("%d",&color);
    int graph[vertices+1][vertices+1];
    int solutionVector[vertices+1];
    printf("Enter the adjencey matrix");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&graph[i][j]);
        }
    }
    graphColoring(1,vertices,solutionVector,graph,color);
return 0;
}