#include "iostream"

// struct Vector {
//     int sz;
//     double* elem;
// };

class Vector {
    public:
    Vector(int s) : elem{new double[s]}, sz{s} {}
    
    double& operator[](int i) {return elem[i];}
    int size() {return sz;}
    
    private:
    int sz;
    double* elem;
};

// void init_vector(Vector& v, int s) {
//     v.elem = new double[s];
//     v.sz = s;
    
// }

double read_and_sum(int s) {
    Vector v(s);
    // init_vector(v, s);
    for (int i = 0; i != s; i++) std::cin >> v[i];
    double sum = 0;
    for (int i = 0; i != s; i++) sum += v[i];
    return sum;
}

int main() {
    constexpr int a = 4;
    constexpr int x = 5 * a;
    std::cout << x;
}
