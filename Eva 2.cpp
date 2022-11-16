/*   Solucion al segundo punto del taller     */


#include<iostream>
#include<stdlib.h>
#include<cstdlib>
#include<time.h> //Librerias para poner los numeros aleatorios


using namespace std;

int main(){
    int n, i, dato ; 
    float suma = 0, media, vec[n], vec2[n] = {0};

    srand(time(NULL));

   
    cout<<"\nIntroduzca el número de elementos: "; cin>>n;
    cout<<"Los elementos son: "<<endl;
    for(i = 0; i<n; i++)
    {
        dato = rand()% (10 + 1 -0 )  ; //generando numeros aleatorios(0-10)
        cout<<dato<<endl; 
        vec[i] = dato;
        suma += vec[i];

    }
   
    media = suma/n;
    cout<<"\nLa media de los n elementos es: "<<media<<endl; //calculando la media

    cout<<"\nLos elementos mayores a la media son: "<<endl;     //se encuentran y muestran los numeros mayores a la media
     for(i = 0; i < n; i++){
         if (vec[i] > media)
         cout<<vec[i]<<endl;
        
         }

    return 0;

}