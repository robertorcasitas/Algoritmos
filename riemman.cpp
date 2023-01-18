#include<iostream>
#include<cmath>
#include<math.h>

using namespace std;

int main(){
    float a,b,x;
    int n;

    cout<<"Tamaño de la particion: ", cin>>n;
    cout<<"Limite inferior: ", cin>>a;
    cout<<"Limite superior: ", cin>>b;

    float dx = (b-a)/n;
    float A[n];
    float Xi[n];
    float f = pow(Xi[n],2)/log(Xi[n]);
    float h= a+dx;

    for (int j = 0; j < n; j++)
    {
        Xi[j]=h;
        h+dx;
    }
        
    
    for (int i = 0; i < n; i++)
    {
        A[i] = pow(Xi[i],2)/log(Xi[i])*dx;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<A[i];
    }
    
    x=0;

    for(int i=0; i < n; i++)
    {
        x+A[i];    
    }
    return 0;
}