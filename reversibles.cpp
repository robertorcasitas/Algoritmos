#include<iostream>
#include<math.h>
#include<cmath>

using namespace std;

int main(){

int n,b=0,c=1,sum=0,inv=0,d=0,l=0;

cout<<"Numero de cifras: ", cin>>n;
int Cif[n], Inv[n];
int a=0;

for (int i = pow(10,n-1); i < pow(10,n); i++)
{
    a=0;
    c=i;
    while (a<n)
    {
    while (c>0)
    {
        
        Cif[a] = c%10;
        c=c/10;
        a++;
    }
    }
    inv=0;
    for (int j = 0; j < n; j++)
    {
        inv = inv + Cif[j]*pow(10,n-j-1);
    }
    d=inv+i;
    a=0;
    while (d>0)
    {
        Inv[a] = d%10;
        d=d/10;
        a++;
    }
    for (int l = 0; l < n; l++)
    {
        if (Cif[0]!=0)
        {
        if (Inv[l]%2!=0)
        {
            if (l==n-1)
            {
                b++;
            }
        }
        else{
            break;
        }  
        } 
    }   

    
}
cout<<"Existen "<<b<<" numeros reversibles de "<<n<<" cifras"<<endl;
    return 0;
}