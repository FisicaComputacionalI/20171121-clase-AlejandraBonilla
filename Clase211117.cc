//Alejandra Bonilla 
//clase 21-1-17
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x,c,h;

cout<<"Evaluamos la funcion coseno en el punto 0.15"<<endl; 
cout<<"x=0.15\n \ncos(x)="<<endl;
    
    x=0.15;
   c = cos(x);
   
   cout<<c<<endl;

cout<<"Calculamos una h para la cual cos(x+h) y cos(x+2h) sean aun diferentes"<<endl;
cout<<"h es un numero muy pequeño"<<endl;

    h=0.027; 
    
    c = cos(x+h);
    cout<<"cos(x+h)="<<c<<endl;
    c = cos(x+2*h);
    cout<<"cos(x+2h)="<<c<<endl;
    
 cout<<"con h=0.027"<<endl; 


    return 0;
}
