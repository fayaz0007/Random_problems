#include <iostream>
using namespace std;
int main()
{
    float i=0,j=1;
    while (i<2.1)
    {
        cout<<"I="<<i<<" j="<<j+i<<"\n";
        cout<<"I="<<i<<" j="<<j+1+i<<"\n";
        cout<<"I="<<i<<" j="<<j+2+i<<"\n";
        i+=0.2;
    }
    
}
