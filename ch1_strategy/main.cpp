
#include "Duck.hpp"
#include "FlyBehavior.hpp"
#include "QuackBehavior.hpp"

int main() {
    Duck * mallard = new MallardDuck();
    mallard->performQuack();
    mallard->performFly();
    delete mallard;
    return 0;
}
