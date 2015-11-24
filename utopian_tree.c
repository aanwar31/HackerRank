#include<stdio.h>

int cal(int n){
    int i,h=1;
    for(i=1;i<=n;i++){
        if(i%2==0)
            h=h+1;
        else
            h=h*2;
    }
    return h;
}


int main(){
    int i,j,n,a[30];
    int c=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++){
            c=cal(a[i]);
    
        printf("%d\n",c);}
    return 0;
}
