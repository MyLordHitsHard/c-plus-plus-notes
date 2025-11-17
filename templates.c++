#include "iostream"

template <typename T>
T minimum(const T& lhs, const T& rhs) {
    return lhs < rhs ? lhs : rhs;
}


// template <typename T, typename U, typename V> class Foo{};
// or
// template<class T, class U, class V> class Foo{};
// typename can be replaced with class keyword

template<typename ... Arguments> class vtclass {};

vtclass<> vtinstance1;
vtclass<int> vtinstance2;
vtclass<float, bool> vtinstance3;

int main() {
    
    int a = 3, b = 5;
    std::cout << minimum<int>(a, b) << std::endl;
    std::cout << minimum(a, b) << std::endl;
    
    
    return 0;
}



// example 1 
/*
class MyClass {
    public:
    int num;
    std::wstring description;
};

vector<MyClass*> vec;
MyDerived d(3, L"hello", time(0));
vec.push_back(&d);

// or more realistically:
vector<shared_ptr<MyClass>> vec2;
vec2.push_back(make_shared<MyDerived>());
*/




// example 2 (for non type references)
/*
template<typename T, size_t L>
class MyArray {
    T arr[L];
    public:
    MyArray() { ... }
};

// or in new version of c++
template <auto x> constexpr auto constant = x;

auto v1 = constant<5>;
auto v2 = constant<true>;
auto v3 = constant<'a'>;
*/
