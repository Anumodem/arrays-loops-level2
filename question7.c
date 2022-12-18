#include <stdio.h>
int main()
{int t,n,a[10002],b[10002];
scanf("%d",&t);
while(t--)
{scanf("%d",&n);
int i;
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
for(i=0;i<n;i++)

    scanf("%d",&b[i]);
int c=0,tem=a[0];
for(i=0;i<n;i++)
{
    if(b[i]<=tem)
        c++;
    tem=a[i+1]-a[i];    
}

    printf("%d\n",c);
}   return 0;
}
