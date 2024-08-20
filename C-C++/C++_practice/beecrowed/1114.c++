#include "iostream"
using namespace std;
int main()
{
    int x,y;
   
    while (true)
    {
        cin>>x>>y;
        if (x>y)
        {
            cout<<"Decrescente"<<endl;
            continue;
        }
        else if(x<y)
        {
            cout<<"Crescente"<<endl;
            continue;  
        }
        else
            break;
    }
    return 0;
}
// #include <iostream>
// using namespace std;

// int main()
// {
//     int x, y;
   
//     while (true)
//     {
//         cin >> x >> y;
//         if (x < y)
//         {
//             cout << "Crescente" << endl;
//             continue;
//         }
//         else
//         {
//             cout << "Decrescente" << endl;
//             break;
//         }
//     }
    
//     return 0;
// }
