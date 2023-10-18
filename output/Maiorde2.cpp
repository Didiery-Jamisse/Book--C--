#include<iostream>
using namespace std;

//Ex3: Maior de 2 numeros 

int main(int argc, char const *argv[])
{
    int a, b, maior;
    char identificador= ' ';

    cout<< "Digita 2 valores para saber qual deles e o MAIOR."<< endl;
    cout << "Primeiro: "; cin >> a;
    cout << "Segundo: "; cin >> b;
    if (a > b)
    {
        maior= a; identificador = 'a';
    }
    else
    {
        maior= b; identificador = 'b';
    }

    cout << "O maior valor entre 'a' e 'b' corresponde a "<< identificador<<" e tem como valor "<< maior;
    
    
    return 0;
}
