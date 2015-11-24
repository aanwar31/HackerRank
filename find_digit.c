#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
        int N[10000],t,a;
    int i,count,r,s,temp;
        scanf("%d",&t);
        for(i=0;i<t;i++)
            scanf("%d",&N[i]);
    for(i=0;i<t;i++){
        count=0;
        s=N[i];
        temp=s;
        while(s){
            
            r=s%10;
            
            s=s/10;
            if(r>0){
            if(temp%r==0)
                count++; 
            }
            
        }
        printf("%d\n",count);
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
