#include "iostream"


class Complex {
    double re, im;
public:
    Complex(double r, double i) : re{r}, im{i} {}
    Complex(double r) : re{r}, im{0} {}
    Complex() : re{0}, im{0} {}
    
    double real() const {return re;}
    void real(double d) {re = d;}
    double imag() const {return im;}
    void imag(double d) {im = d;}
    
    
    Complex& operator+=(Complex z) {re += z.re, im += z.im; return *this;}
    Complex& operator-=(Complex z) {re -= z.re, im -= z.im; return *this;}
    
    
    Complex& operator*=(Complex);
    Complex& operator/=(Complex);
    
    
    
    
    Complex sqrt(Complex);
};

    Complex operator+(Complex a, Complex b) { return a+=b; }
    Complex operator-(Complex a, Complex b) { return a-=b; }
    Complex operator-(Complex a) { return {-a.real(), -a.imag()}; }
    // Complex operator*(Complex a, Complex b) { return a*=b; }
    // Complex operator/(Complex a, Complex b) { return a/=b; }
    
    bool operator==(Complex a, Complex b) {
    return a.real()==b.real() && a.imag()==b.imag();
    }
    
    bool operator!=(Complex a, Complex b) {
    return !(a==b);
    }
    
    
void f(Complex z) {
    Complex a {1+z};
}

int main() {
    
}



class Vector {
    int sz;
    double* elem;
public:
    Vector(std::initializer_list<double>);
    void push_back(double);
};
Vector::Vector(std::initializer_list<double> lst) // initialize with a list
:elem{new double[lst.size()]}, sz{lst.size()}
{
    std::copy(lst.begin(),lst.end(),elem); // copy from lst into elem
}
