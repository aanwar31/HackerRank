#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int test,num,student_num;
    int student_arrival[1000];
    int i,count=0,k;
    scanf("%d",&test);
    while(test--){
        scanf("%d %d",&num,&student_num);
        for(i=0;i<num;i++){
            scanf("%d",&k);
            if(k<=0){
                student_arrival[i]=k;  
                count++;
            }
        }
       
        if(count<student_num)
            printf("YES\n");
        else
            printf("NO\n");
        count=0;
       
    }
    return 0;
}
