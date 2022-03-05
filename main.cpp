#include <iostream>
#include <math.h>

using namespace std;
int Suma,Ilocz,A,B;
int main(){
    cout<<"Podaj Sume:";
    cin>>Suma;
    cout<<"Podaj Iloczyn:";
    cin>>Ilocz;
    A=(Suma-sqrt(pow(Suma, 2)-4*Ilocz))/2;
    B=(Suma+sqrt(pow(Suma, 2)-4*Ilocz))/2;
    cout<<"A: "<<A<<" B: "<<B;
    return 0;
}
