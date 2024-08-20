#include "iostream"
using namespace std;
int main()
{
    int a,i;
    while(true)
    {
        cin>>a;
        if(a!=2002)
        {
            cout<<"Senha Invalida"<<endl;
            continue;
        }
        else
            {
                cout<<"Acesso Permitido"<<endl;
                break;
            }
    }
    return 0;
}