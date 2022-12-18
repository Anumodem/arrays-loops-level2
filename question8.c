#include <stdio.h>
#include<string.h>
int main()
{
    char digitonwb[1000002];
    int i,k;
    int len,nonzero;
    long long res=0;
    scanf("%s",digitonwb);
    len=strlen(digitonwb);
    for(i=0;i<len;i++)
    {
        k=digitonwb[i]-'0';
        if(k%8==0)res++;
        }
        for(i=1;i<len;i++)
        {
            if(digitonwb[i-1]=='0')continue;
            k=(digitonwb[i-1]-'0')*10+(digitonwb[i]-'0');
            if(k%8==0)res++;
            }
            nonzero=0;
            for(i=2;i<len;i++)
            {
k=(digitonwb[i-2]-'0')*100+(digitonwb[i-1]-'0')*10+(digitonwb[i]-'0');
if(digitonwb[i-2]!='0')nonzero++;
if(k%8==0)res+=nonzero;
            }
printf("%lld",res);
	return 0;
}
