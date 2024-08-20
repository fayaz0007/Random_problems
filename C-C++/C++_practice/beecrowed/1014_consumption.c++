#include "iostream"
#include "iomanip"
using namespace std;
int main()
{
    int X;
    float y,cal;
    cin>>X>>y;
    cal = X/y;
    cout<<fixed<<setprecision(3)<<cal<<" km/l"<<endl;
    return 0;
}

