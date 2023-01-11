#include<iostream>
#include<cmath>
#include<math.h>
#include<fstream>

using namespace std;

int main(){
    float n,vi,vix,viy,vy,ang,theta,g,t,dt;
    
    g=-9.8;
    
    cout<<"Velocidad inicial: ", cin>>vi;               //velocidad inical
    
    cout<<"Ángulo de lanzamiento: ",cin>>ang;            //Ángulo inicial

        theta=ang*M_PI/180;
    
        vix= vi*cos(theta);       //velocidad inical x
        viy= vi*sin(theta);       //velocidad inical y
        //vy= viy-g*t;            //velocidad en y función del tiempo
        double T=-(2*vi*sin(theta))/g;    //Tiempo de vuelo

                cout<<"Número de particiones: ",cin>>n;
                dt=T/(n-1);
                
            float X=0;
            float Y=0;
            

                        string nombre = "parabolico.txt";
                        ofstream archivo;
                        archivo.open(nombre.c_str(), fstream::out);
                        archivo<<"X, Y, Vx, Vy "<<endl;

                for (int i = 0; i < n; i++)
                {
                    X= vix*i*dt;  
                    Y= viy*i*dt+(g*0.5*pow(i*dt,2));
                    vy= g*i*dt+viy;

                        archivo<<X<<", "<<Y<<", "<<vix<<", "<<vy<<endl;        
            }
        archivo.close();

    return 0;
}