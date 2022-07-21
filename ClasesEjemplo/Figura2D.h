

class Figura2D{
    protected:
        float altura;
        float base;
        int num_lados;
    public:
        Figura2D(float, float, int);
        float perimetro();
        float area();

};

Figura2D::Figura2D(float _base, float _altura, int _numL){
    this->altura=_altura;
    this->base=_base;
    this->num_lados= _numL;
};

