#include "iostream"
#include "string"

class Entity {
  
  private:
  std::string m_Name;
  int m_Age;
  
  public:
  explicit Entity(const std::string& name) : m_Name(name), m_Age(-1) {}
  Entity(int age) : m_Name("Unknown"), m_Age(age) {}
    
    
};

void printEntity(const Entity& e) {
    
}


int main() {
    printEntity(21);
    //Entity a = std::string("Himanshu");
    Entity a = Entity("Himanshu");
    Entity b = 21;
    
    
    
}
