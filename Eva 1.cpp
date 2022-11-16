#include <iostream>
#include <cmath>                    //Librerias
#include <vector>
#include<iomanip>

using namespace std;

int main(){

    double n, pi, suma, temp,temp2;         //Definición de variables
    temp2=0;
    cout<<"Número de veces a realizar el proceso: ",cin>>n;  //Se solicita el número de términos de la sumatoria y se guarda en la variable n
        for (float i = 0; i < n; i++)
            {
            temp= (pow(-1,i))/(2*i+1);              //Cada elemento de la sumatoria está dado por esta forma
            suma+=temp;                      //Se suma el elemento actual con el anterior y se almacena                           
            }
    pi=suma*4;                  //La formula de Leibniz nos indica que el resultado de la sumatoria anterior multiplicado por 4 es el valor de pi
    cout<<setprecision(20)<<pi; //Finalmente mostramos el valor de pi calculado por el método de Leibniz en pantalla
        return 0;
}