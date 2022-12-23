#include <stdio.h>
int main()
{
    char b[4],a[9]; int r;
    printf("enter the dividend :  ");  scanf("%s",&a);
    printf("enter the divisior :  ");  scanf("%s",&b);
    printf("\n");
    for(int k=0;k<9;k++)
    {
        if(a[k]!='0')
        {
            r=0;
            while(r!=4)
            {
                if(a[k+r]=='0' && b[r]=='0')
                {
                    a[k+r]='0';
                }
                else if(a[k+r]=='1' && b[r]=='1')
                {
                    a[k+r]='0';
                }
                else
                {
                    a[k+r]='1';
                }
                r=r+1;
            }
        }
        else
        {
            r=0;
            if(a[k+r]=='0')
            {
                a[k+r]='0';
            }
            else
            {
                a[k+r]='1';
            }
        r=r+1;
        }
        if(k==6)
        {
            break;
        }
    }
    int count=0;
    for(int t=6;t<9;t++)
    {
        printf("%c ",a[t]);
        if(a[t]=='0')
        {
            count=count+1;
        }
    }
    if(count==3)
        printf("\nthere are no errors so accept the data\n");
    else
        printf("\nthere is a error so reject the data\n");
}
