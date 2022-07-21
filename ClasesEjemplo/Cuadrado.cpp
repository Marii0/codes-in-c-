#include "Figura2D.h"
#include<iostream>
using namespace std;
class Cuadrado : Figura2D
{

public:
    Cuadrado(float altura, float base, int numL) : Figura2D(base, altura, numL)
    {

    }
    float area(){
        return this->altura*this->altura;
    }
    float perimetro(){
        return this->base*4;
    }
};

int main(int argc, char const *argv[])
{
    Cuadrado figura1 = Cuadrado(4, 4, 4);
    Cuadrado figura2 = Cuadrado(10 , 10, 4);
    cout<<figura1.area()<<endl;
    cout<<figura2.perimetro();
    return 0;
}
