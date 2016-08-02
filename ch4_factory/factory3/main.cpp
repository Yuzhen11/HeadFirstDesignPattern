#include "Pizza.hpp"
#include "PizzaStore.hpp"
#include "PizzaIngredientFactory.hpp"

int main() {
    std::shared_ptr<PizzaStore> pizza_store = std::make_shared<NYStylePizzaStore>();
    std::shared_ptr<Pizza> pizza = pizza_store->orderPizza("cheese");
}
