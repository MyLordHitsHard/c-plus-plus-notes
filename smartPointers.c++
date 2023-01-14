#include "iostream"
#include "string"
#include "memory"


class Entity {
    
    public:
    
    Entity() {
        std::cout << "Created Entity!" << std::endl;
    }
    ~Entity() {
        std::cout << "Destroyed Entity!" << std::endl;
    }
    
    void print() {
        
        
    }
};


int main() {
    
    
    {
        // std::unique_ptr<Entity> entity(new Entity());
        std::unique_ptr<Entity> entity = std::make_unique<Entity>(); // prevents dangling pointer
        entity -> print();
        
    }
    
    {
        std::shared_ptr<Entity> e;
        
        {
        
        std::shared_ptr<Entity> entity = std::make_shared<Entity>();
        e = entity;
        std::weak_ptr<Entity> e1 = entity; // it doesn't increase reference count for shared pointer
    }
    std::cout << "Not now" << std::endl;
    }
    
    
    
    
}
