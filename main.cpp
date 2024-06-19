#include <iostream>

using namespace std;

int dodawanie(int arg1,int arg2)
    {
        int suma=arg1+arg2;
        return suma;
    }

int odejmowanie(int arg1,int arg2)
    {
        int roznica=arg1-arg2;
        return roznica;
    }

int main()
{
    int arg1,arg2;
    cout<<"Wpisz liczbe (1): ";
    cin>>arg1;
    cout<<"Wpisz liczbe (2): ";
    cin>>arg2;
    cout<<"Suma twoich liczb to: "<<dodawanie(arg1,arg2)<<endl;
    cout<<"Roznica twoich liczb to: "<<odejmowanie(arg1,arg2)<<endl;
}
