#include "iostream"
using namespace std;
int main()
// {
//     int m,n,i,calcu = 0;
//     cin>>m>>n;
//     if(m>0&&n>0)
//     {
//         if(m>n)
//         {
//             for(i=n;i<=m;i++)
//             {
//                 cout<<i<<" ";
//                 calcu = calcu+i;     
//             }
//         }
//         else if (n>m)
//         {
//             for(i=m;i<=n;i++)
//             {
//                 cout<<i<<" ";
//                 calcu = calcu + i;     
//             }
//         }
    
//     cout<<"Sum="<<calcu<<endl;
//     }
//     else
//         return 0;
//     return 0;
// }

{
    int x,y,sum,i,z;
    
    while (true)
    {
        cin>>x>>y;
        if(x<=0) break;
        if(y<=0) break;
        if(x>y)
        {  
            z=x;
            x=y;
            y=z;
        }    
        sum = 0;
        for(i=x;i<=y;i++)
        {    
            cout<<i<<" ";
            sum+= i;
        }    
        cout<<"Sum="<<sum<<endl;
    
    }
   
}  

    
// }
// #include "iostream"
// using namespace std;
// int main()
// {
//     int m,n,i,calcu = 0;
//     cin>>m>>n;
//     if(m>0&&n>0)
//     {
//         if(m>n)
//         {
//             for(i=n;i<=m;i++){
//                 cout<<i<<"";
//                 calcu = calcu+i; 
//             }
//         }
//         else if (n>m)
//         {
//             for(i=m;i<=n;i++)
//             {
//                 cout<<i<<" ";
//                 calcu = calcu + i; 
//             }
//         }
//     cout<<"sum="<<calcu<<endl;  
//     }
    
//     else
//         return 0;
//     return 0;
// }