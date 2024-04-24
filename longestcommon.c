#include<stdio.h>
#include<string.h>
#define MAX_LENGTH 200

void findLCS(int str1[],int str2[],int m,int n){
    int dp[m+1][n+1];
    for(int i =0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0||j==0){
                dp[i][j]=0;

            }
            else if(str1[i-1]==str2[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else{
                dp[i][j]=(dp[i-1][j]>dp[i][j-1])?dp[i-1][j]:dp[i][j-1];
            }
        }
    }
    int length = dp[m][n];
    char lcs[length+1];
    lcs[length]='\0';
    int i=m,j=n;
    while(i>0&&j>0){
        i
    }
}
int main()
{
    
return 0;
}