#include "iostream"
#include "string"
#include "tuple"


std::pair<std::string, std::string> func(std::string name, std::string lastname) {
   
   
    return std::make_pair(name, lastname);
}

int main() {
    
    std::pair<std::string, std::string> sources = func("Himanshu", "Dutt");
    
    std::cout << std::get<0>(sources) << " " << std::get<1>(sources) << std::endl;
    std::cout << sources.first << " " << sources.second << std::endl;
}
