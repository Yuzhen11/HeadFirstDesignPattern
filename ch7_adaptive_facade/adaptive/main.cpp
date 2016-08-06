#include <memory>

#include "Turkey.hpp"
#include "Duck.hpp"
#include "TurkeyAdapter.hpp"

// An API only support Duck
void test(std::shared_ptr<Duck> duck) {
    duck->quack();
    duck->fly();
}

int main() {
    std::shared_ptr<Duck> duck = std::make_shared<MallardDuck>();
    std::shared_ptr<Turkey> turkey = std::make_shared<WildTurkey>();
    
    std::shared_ptr<Duck> turkey_adapter = std::make_shared<TurkeyAdapter>(turkey);

    std::cout << "Real duck" << std::endl;
    test(duck);
    std::cout << "Fake duck" << std::endl;
    test(turkey_adapter);
}


