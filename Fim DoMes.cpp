#include<iostream>
using namespace std;

//Ex4: Calcular quantos dias faltam ate o final do mes 

int main(int argc, char const *argv[])
{
    int dia, mes, ano;
    int diasRestantes, diasMes;
    cout << "DIAS: "; cin >> dia;
    cout << "MES: "; cin >> mes;
    cout << "ANO: "; cin >> ano;
   if (mes > 0  && mes <= 12 & dia > 0 && dia <= 31 ) //algebra de bool
   {
    switch (mes) //Switch, uma instrucao de decisao multipla
    {
    case 2:
        if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0)
        {
            diasMes = 29;
            diasRestantes= diasMes - dia;
        }
        else
        {
            diasMes = 28;
            diasRestantes= diasMes - dia;
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        diasMes = 30;
        diasRestantes= diasMes - dia;
        break;
    default:
        diasMes= 31;
        diasRestantes= diasMes - dia;
        break;
    }
    cout << "Faltam "<< diasRestantes<<" para terminar o mes de "<<mes;
   }
    else
    {
        cout << "Data Invalida!";
    }
    return 0;
}
