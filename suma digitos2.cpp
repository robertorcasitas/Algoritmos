#include<iostream>
#include<cmath>
#include<math.h>

using namespace std;

int main (){

int n,temp,a=0,b,c,d,prb,sum=0;
int cif[10]={0,0,0,0,0,0,0,0,0,0};

cout<<"Numero de prueba: ", cin>>n;
for (int i = 0; i < 10; i++)
{
    for(int a = 0; a < 10; a++)
    {
    prb = (a*pow(10,i))+(pow(10,i)-1);

    b=prb;
    c=0;

    while (b>0)
        {
            cif[c] = b%10;
            b = b/10;
            
            c++;
        }
        sum=0;
        for (int j = 0; j < 10; j++)
        {
            sum = sum + cif[j];

            if (sum == n)
            {
                cout<<prb<<endl;
                break;
            }
          
            
        }
    }
}
    return 0;
}
