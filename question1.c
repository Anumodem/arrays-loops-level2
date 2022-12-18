#include <stdio.h>
int main()
{
    int t,n,i;
scanf("%d",&t);
while(t--){
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);    }
        int count=0,j;
        if(a[0]==1&&a[n/2]==(n/2)+1){
            for(i = 0,j=n/2;i <n/2; i++,j++){
                if(((a[i+1]-a[i])==1)&&((a[j]-a[j+1])==1)){
                    count =0;
                        }
                        else{count=1;
                        break;
                        }
            }
        }
        else {count=1;}
        if(count==0)
        printf("yes\n");
        else
        printf("no\n");
}
	return 0;
}
