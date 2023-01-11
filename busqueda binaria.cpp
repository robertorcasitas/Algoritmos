/*BUSQUEDA BINARIA
m=|_(L+R)/2_|
1. Ordenar el vector
2.L=0 y R=n-1
3. Si L>R finaliza con error
4. Si A[m]<T ---> L=m+1 y volvemos a 2
5. Si A[m]>T ---> R=m-1 y volvemos a 2
6. Si A[m]=T finalizar y devolver m
*/

#include<iostream>
#include<cmath>
#include<math.h>
#include<cstdlib>
#include<time.h>
using namespace std;

int main(){
srand(time(0));    
int n,m,temp,T,L,R;
cout<<"Tamaño del vector: ", cin>>n;
int A[n];
L= 0, R=n-1;

for (int k = 0; k < n; k++)
{
    A[k]=rand()% 200;
}

for (int i=0; i< n-1; i++){
    for (int j = 0; j < n-1; j++){
        if (A[j] > A[j+1])
        {
            temp = A[j];
            A[j]= A[j+1];
            A[j+1]=temp;
        }
    }
}
for (int g = 0; g < n; g++)
{
    cout<<A[g]<<", ";
}

cout<<"Número a buscar: ",cin>>T;



while (A[m]!=T)
{
    m= floor((L+R)/2);
    if (L>R)
    {
        cout<<"No se encontró :c";
        break;
    }
    else if (A[m]<T)
    {
        L=m+1;
    }
    else if (A[m]>T)
    {
        R=m-1;
    }
    else if (A[m]=T)
    {
        cout<<"Se ha encontrado el número en la posición: ";cout<<m<<endl;break;
    }
    
}

    return 0;
}
