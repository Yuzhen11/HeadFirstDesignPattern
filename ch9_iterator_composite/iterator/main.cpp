#include <memory>
#include <iostream>

#include "Menu.hpp"
#include "Waitress.hpp"

int main() {
    std::shared_ptr<DinerMenu> dinerMenu(new DinerMenu);
    std::shared_ptr<PancakeMenu> pancakeMenu(new PancakeMenu);
    Waitress waitress(dinerMenu, pancakeMenu);
    waitress.printMenu();
}
