#include<iostream>
#include<math.h>
using namespace std;
class Function{
    public:
        virtual double Value(double x)=0;
        virtual double Derive(double x)=0;
};
class Sin:public Function{
    public:
        double Value(double x)
        {
            return sin(x);
        }
        double Derive(double x)
        {
            return cos(x);
        }
};
class Cos: public Function{
    public:
        double Value (double x)
        {
            return cos(x);
        }
        double Derive (double x)
        {
            return -sin(x);
        }
};
double DeriveProduct(Function *f, Function *g,double x)
{
    if(f!=NULL&& g!= NULL)
    {
        return f->Derive(x)*g->Value(x)+f->Value(x)*g->Derive(x);
    }
    return 0;
}
double DeriveSum(Function *f,Function *g,double x)
{
    if(f!=NULL&& g!= NULL)
    {
        return f->Derive(x)+g->Derive(x);
    }
    return 0;
}
double DaoHamThuong(Function *f,Function *g, double x)
{
    if (g!=NULL)
    {
        return (f->Derive(x)*g->Value(x)-f->Value(x)*g->Derive(x))/(g->Derive(x)*g->Derive(x));
    }
    return 0;
}
double DaoHamCuaHamHop(Function *f,Function *g,double x)
{
    if(f!= NULL&& g!=NULL)
    {
        return f->Derive(g->Value(x))*g->Derive(x);

    }
    return 0;
}

int main()
{
    double x=3.14/6;
    Sin *s=new Sin();
    double y=DeriveProduct(s,s,x);
    cout << "sin("<< "3.14/6"<< ")"<<s->Value(x)<< "sin'(3.14/6)"<<s->Derive(x)<< endl;
    cout << "y= "<< y << endl;
    return 0;
}