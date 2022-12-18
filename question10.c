#include <stdio.h>
#include<limits.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
}
int max=-20000;
int j;
for(i=0;i<n;i++){
    int sum=0;
    for(j=i;j<n;j++){
        sum+=a[j];
        if(sum>max)
        max=sum;
    }
        
}
printf("%d\n",max);
    }

	return 0;
}
