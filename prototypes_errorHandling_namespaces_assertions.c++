#include "iostream"

double sqrt(double);

double sqrt(double d) {
    // some implementation
    
    return 1.234;
}
class Vector {
    public:
        Vector(int s);
        double& operator[](int i);
        int size();
    private:
        double* elem;
        int sz;
};

// Vector::Vector(int s) : elem{new double[s]}, sz{s} {}
Vector::Vector(int s) {
    if (s < 0) throw std::length_error{"negative length"};
    elem = new double[s];
    sz = s;
}
double& Vector::operator[](int i) {
    if (i < 0 || i >= size()) throw std::out_of_range{"Vector::operator[]"};
    return elem[i];
}
int Vector::size() {return sz;}


namespace My_code {
    class complex {/* ... */};
    complex sqrt(complex);
    // ...
    int main();
}

int My_code::main() {
    // complex z {1, 2};
    // auto z2 = sqrt(z);
    // std::cout << '{' << z2.real() << ',' << z2.imag() << "}\n";
    // ...
}

static_assert(4 <= sizeof(int), "integers are too small");

constexpr double C = 299792.458;
void f(double speed) {
    constexpr double local_max = 160.0/(60*60);
    static_assert(local_max < C, "can't go that fast");
}

int main() {
    return My_code::main();
}
