#include <stdio.h>
int main()
{
    int T,Q,add=0,s,i,p,j;
    scanf("%d",&T);
    for (i = 1;i<=T;i++)
    // while (i<=T)
    {
       scanf("%d",&Q);
       for (j =1;j<=Q;j++)
        {
            scanf("%d%d",&s,&p);
            if (s==1)
                add = add + p;
            else if (s==2) 
                {
                    if (add==0)
                        add = add*p;
                    else 
                        add = add-p;
                        
                }
            else if (s==3)
                printf("%d units of energy\n",add);
            else 
                ("Wrong input\n");       
        }
        add = add*0;
    }
   
}