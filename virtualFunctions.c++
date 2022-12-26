/*
#include "iostream"
#include "string"


class Entity {
    
    public:
    
    std::string GetName() { return "Entity"; }
    
};


class Player : public Entity {
    
    
    private:
    std::string m_name;
    
    public:
    Player(const std::string& name) : m_name(name) {
        
    }
    
    std::string GetName() {return m_name;}
    
    
};

int main() {
    
    
    Entity* e = new Entity();
    std::cout << e -> GetName() << std::endl;
    
    Player* p = new Player("Himanshu");
    std::cout << p -> GetName() << std::endl;
    
    Entity* entity = p;
    std::cout << entity -> GetName() << std::endl;
}
*/


#include "iostream"
#include "string"


class Entity {
    
    public:
    
    virtual std::string GetName() { return "Entity"; }
    
};


class Player : public Entity {
    
    
    private:
    std::string m_name;
    
    public:
    Player(const std::string& name) : m_name(name) {
        
    }
    
    std::string GetName() override {return m_name;}
    
    
};

int main() {
    
    
    Entity* e = new Entity();
    std::cout << e -> GetName() << std::endl;
    
    Player* p = new Player("Himanshu");
    std::cout << p -> GetName() << std::endl;
    
    Entity* entity = p;
    std::cout << entity -> GetName() << std::endl;
}




