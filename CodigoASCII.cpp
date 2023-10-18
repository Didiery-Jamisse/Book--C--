#include<iostream>
using namespace std;

//EX1: Mostrar o codigo ASCII das teclas primadas

int main(int argc, char const *argv[])
{
    char letra = ' ';
    while (letra != '*')
    {
        cout << "Digita um caractere: ";
        cin >> letra;
        cout << "O codigo ASCII do caractere "<<letra <<" e "
             << (unsigned int) letra<<endl; //unsigned int e um comando usado para mostrar na tela o codigo alfanumerico do caractere letra; 
    }
    
    return 0;
}
