#include "Pizza.hpp"
#include "PizzaStore.hpp"

#include <memory>

int main() {
    std::shared_ptr<PizzaStore> ny_store(new NYStylePizzaStore);
    std::shared_ptr<PizzaStore> chicago_store(new ChicagoStylePizzaStore);
    ny_store->orderPizza("cheese");
    chicago_store->orderPizza("cheese");
}
