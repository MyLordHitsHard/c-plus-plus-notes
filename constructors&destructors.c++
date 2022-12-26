#include "iostream"


class Example {
    
    public:
    
    int x, y;
    
    Example() {
        x = 12, y = 24;
    }
    
    ~Example() {
        std::cout << "Destroyed" << std::endl;
    }
    
    void example_function() {
        std::cout << x << ", " << y << std::endl;
    }
    
    
};

int main() {
    
    
    Example e1;
    
    e1.example_function();
    e1.~Example();
    
    
}
