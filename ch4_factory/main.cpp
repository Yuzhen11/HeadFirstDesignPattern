#include "Pizza.hpp"
#include "PizzaStore.hpp"
#include "SimplePizzaFactory.hpp"

int main() {
    std::shared_ptr<SimplePizzaFactory> factory(new SimplePizzaFactory);
    PizzaStore pizza_store(factory);
    std::shared_ptr<Pizza> pizza = pizza_store.orderPizza("cheese");
}
