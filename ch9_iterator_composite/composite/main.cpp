#include <memory>

#include "Menu.hpp"
#include "Waitress.hpp"

int main() {
    std::shared_ptr<MenuComponent> pancakeMenu(new Menu("Pancake Menu"));
    std::shared_ptr<MenuComponent> dinerMenu(new Menu("Diner Menu"));

    std::shared_ptr<MenuComponent> allMenus(new Menu("All Menus"));
    allMenus->add(pancakeMenu);
    allMenus->add(dinerMenu);

    std::shared_ptr<MenuComponent> pasta(new MenuItem("Pasta"));
    std::shared_ptr<MenuComponent> pie(new MenuItem("Pie"));
    dinerMenu->add(pasta);
    dinerMenu->add(pie);

    Waitress waitress(allMenus);
    waitress.printMenu();
}
