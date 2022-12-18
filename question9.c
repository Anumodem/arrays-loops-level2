#include <stdio.h>
#include<stdlib.h>
int cmpfunc(const void*a,const void*b){
return(*(int*)a-*(int*)b);
}
int main()
{    int n,m,price[104];
    int s=0;int i;
        scanf("%d %d",&n,&m);
        for (i=0;i<n;i++){
            scanf("%d",&price[i]);}
            qsort(price,n,sizeof(int),cmpfunc);
            int x=0;
            while(m>0){
                if(price[x]>0){m=0;}
               else{s=s+price[x];x++;
                 m--;}
        }        printf("%d",-s);
	return 0;
}
