#include <stdio.h>
void findMaxProfit(int price[],int n)
{ 
    int j=0,i;
for(i=1;i<n;i++)
{
    if(price[i-1]>price[i])
    j=i;
    if(price[i-1]<=price[i]&&(i+1==n||price[i]>price[i+1]))
    {
        if(n!=4)
        printf("(%d %d)",j,i);
        else printf("No Profit\n");
    }
}
printf("\n");
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i;
        scanf("%d",&n);
        int arr[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        findMaxProfit(arr,n);
    
}
	return 0;
}
