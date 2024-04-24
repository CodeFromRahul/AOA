#include<stdio.h>
#include<string.h>
#define d 256

void search(char* pat, char* txt,int q){
    int m = strlent(pat);
    int n =strlen(txt);
    int i ,j;
    int p = 0;
    int t= 0;
    int h =1;
    for(int i = 0 ;i<m-1;i++){
        h=(h*d)%q;
        for(int i =0;i<m;i++){
            p=(d*p+pat[i])%q;
            t=(d*t+txt[i])%q;
        }
        for(int i =0;i<n-m;i++){
            if(p==t){
                for(j=0;j<m;j++){
                    if(txt[i+j]!=pat[j]){
                        break;
                    }

                if(j==m){
                    printf("pattern found at index %d\n",i);
                }
                if(i<n-m){
                    t=(d*t-txt[i]*h+txt[i+m])%q;
                    if(t<0){
                        t=(t+q);
                    }
                }
                }
            }
        }


    }

}
int main()
{
    
return 0;
}