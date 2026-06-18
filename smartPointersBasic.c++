#include <memory>
#include <iostream>


// example for weak pointer (to avoid circular references)
class B;

class A
{
public:
    std::shared_ptr<B> bptr;
};

class B
{
public:
    std::weak_ptr<A> aptr;
};


int main() {
    
    // example for raw pointer
    int* rawPtr = new int(10);
    std::cout << *rawPtr << std::endl;
    delete rawPtr;
    rawPtr = nullptr;
    
    
    // example for unique pointer
    std::unique_ptr<int> uPtr = std::make_unique<int>(100);
    std::cout << *uPtr << std::endl; // no need to free memory after using it cuz it uses RAII
    // std::unique_ptr<int> uPtr2 = uPtr;  (copying is not allowed cuz it is a unique pointer)
    std::unique_ptr<int> uPtr2 = std::move(uPtr); // to transfer the ownership


    // example for shared pointer
    std::shared_ptr<int> sPtr = std::make_shared<int>(1000);
    auto sPtr2 = sPtr;
    std::cout << *sPtr << ", " << *sPtr2 << std::endl;
    std::cout << sPtr.use_count() << std::endl;
    
    
    // example for weak pointer continued
    if (auto temp = weakPtr.lock())
    {
        temp->doSomething();
    }
    
    
    return 0;
}
