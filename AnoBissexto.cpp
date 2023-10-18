#include<iostream>
using namespace std;

//Ex2: Ano Bissexto

int main(int argc, char const *argv[])
{
    int ano;
    cout << "Ano: ";
    cin >> ano;

    if (ano % 4 ==0 && ano % 100 != 0 || ano % 400 ==0 ) //Usando os principios da algebra de bool quanto ao valor logico
    {
        cout <<"O Ano de "<< ano << " e BISSEXTO! ";
    }
    else
    {
        cout << "Nao e um Ano BISSEXTO! ";
    }
    
    

    return 0;
}
