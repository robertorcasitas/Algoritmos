#include<iostream>
#include<vector>
#include<cmath>
#include<math.h>
#include<conio.h>
#include<stdio.h>


using namespace std;

int main(){
    double ang;   //ángulo de rotación
    cout<<"Ingrese el ángulo en que se va a rotar el cuadrilatero: ", cin>>ang;
    
    double X[4], Y[4];     //vectores que guardarán las componentes de x e y
    double Xr[4], Yr[4];   //vectores que guardarán las componentes rotadas

    double A[2][2]={{cos(ang/180*M_PI), -sin(ang/180*M_PI)},           //Matriz que define la rotación
                   {sin(ang/180*M_PI), cos(ang/180*M_PI)}};


        cout<<"Ingrese las cordenadas de los vértices del cuadrilatero: "<<endl;
            for (int i = 0; i < 4; i++)                                 //Solicitud de las componentes
            {
                cout<<"Componente en x del vertice "<<i+1<<" : ",cin>>X[i];
                cout<<"Componente en y del vertice "<<i+1<<" : ",cin>>Y[i];

            }

                for (int i = 0; i < 4; i++)                 //Multiplicación de la matriz por cada coordenada x,y
                {
                    Xr[i]=A[0][0]*X[i] + A[0][1]*Y[i];
                    Yr[i]=A[1][0]*X[i] + A[1][1]*Y[i];
                }                            
                       cout<<"Nuevas cordenadas de los vértices:\n ";  //Se muestran las nuevas coordenadas
                        cout<<"("<<Xr[0]<<", "<<Yr[0]<<")"<<endl;
                        cout<<"("<<Xr[1]<<", "<<Yr[1]<<")"<<endl;
                        cout<<"("<<Xr[2]<<", "<<Yr[2]<<")"<<endl;
                        cout<<"("<<Xr[3]<<", "<<Yr[3]<<")"<<endl;
                        
    return 0;
}