#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main(){
    int numero, tamano,contador, contar=0, indice=0, i=0, digito=0;
    bool visitado[] = {false};
    double digitos[100];
    

    cout << "Ingrese el numero: "; cin >> numero;
    contador =  numero;
    while (contador > 0)
    {
        contador= contador/10;
        contar++;
    }
    
    contador =  numero;
    for (int k = contar-1; k >= 0; k--)
    {
        digitos[k]= contador%10;
        contador =  contador/10;
    }
  

    while (visitado[indice]!= true)
    {   
        visitado[indice]= true;
        digito = digitos[indice];
        indice = (indice + digito)%contar;
        i++;
    }
    
    if(i==contar){
        cout << "SALTARIN";
    } else {
        cout << "NORMAL";
    }

    return 0;
}