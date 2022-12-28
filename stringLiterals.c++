#include "iostream"
#include "string"



int main() {
    
    "hello";
    
    const wchar_t* example = L"Hello";
    const char16_t* example1 = u"Hello";
    const char32_t* example2 = U"Hello";
    
    
    using namespace std::string_literals;
    std::string example3 = "Hello"s + " World!";
    
    const char* example4 = R"(Line1
    Line2
    Line3
    line4)";
    
    const char* example5 = "Line1\n"
    "Line2\n";
    
    
    std::cout << example4 << "\n" << example5 << std::endl;
    
    
}
