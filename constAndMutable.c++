#include "iostream"
#include "string"


class Entity {
    
  private:
  int m_X, m_Y;
  
  mutable int var = 4;
  
  public:
  
  int getX() const {
      
      // can't change m_X and m_Y because of const keyword
      // but can change var because it is mutable
      var = 5;
      return m_X;
  }
    
};



int main() {
    
   int x = 8;
   
   // lambda
   auto f = [=]() mutable {
       
       x++;
       std::cout << x << std::endl;
   };
   
   f();
    
    
}
