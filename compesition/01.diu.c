#include <stdio.h>
int main()
{
    int T,Q,add=0,s,i,p;
    scanf("%d%d%d",&T,&Q);
    for (i = 1;i<=T;i++)
    {
        for (i =1;i<=Q;i++)
        {
            scanf("%d%d",&s,&p);
            if (s==1)
                add = add + p;
            else if (s==2)
                {
                    if (p==0)
                        add = add*p;
                    else 
                        add = add-p;
                        
                }
            else if (s==3)
                printf("%d units of energy",add);
            else 
                ("Wrong input");       
        }
    return 0;
    }
}