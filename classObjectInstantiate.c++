#include "iostream"
#include "string"

using String = std::string;

class Entity {
  private:
  String m_Name;
  public:
  Entity() : m_Name("Unknowm") {}
  Entity(const String& name) : m_Name(name) {}
  const String& getName() const { return m_Name; }
  
    
    
};

int main() {
    
    // stack instantiation
    Entity e("Himanshu");
    std::cout << e.getName() << std::endl;
    Entity e1 = Entity("Dutt");
    
    
    // heap instantiation
    Entity* entity = new Entity("LMAO ye to pta hi ni tha");
    std::cout << entity -> getName() << std::endl;
    delete entity;
    
}
