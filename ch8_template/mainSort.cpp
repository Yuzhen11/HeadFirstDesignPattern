#include "Comparable.hpp"
#include <vector>
#include <iostream>

class Duck : public Comparable {
public:
    Duck() {}
    Duck(const std::string& _name): name(_name) {}
    virtual bool compareTo(Comparable* other) {
        return name < dynamic_cast<Duck*>(other)->name;
    }
    virtual void print() {
        std::cout << name << std::endl;
    }
    std::string name;
};

void sort(std::shared_ptr<Comparable> * a, const int n) {
    for (int i = 0; i < n-1; ++ i) {
        for (int j = 0; j < n-i-1; ++ j) {
            if (a[j]->compareTo(a[j+1].get()) == false)
                swap(a[j],a[j+1]);
        }
    }
}
void print(std::shared_ptr<Comparable> * a, const int n) {
    for (int i = 0; i < n; ++ i)
        a[i]->print();
}

int main() {
    std::shared_ptr<Comparable> a[3];
    a[0] = std::make_shared<Duck>("fff");
    a[1] = std::make_shared<Duck>("bbb");
    a[2] = std::make_shared<Duck>("ccc");
    sort(a, 3);
    print(a, 3);
}
