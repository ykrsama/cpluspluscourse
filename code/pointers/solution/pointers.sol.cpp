//
// Created by xuliang on 2021/11/20.
//

#include "pointers.hpp"

int main() {
// Q1 : Use delete to fix the memory leak?

// Q2 : Or use shared_ptr to replace the raw pointer?
    for (int i = 0; i < 10; i++) {
        //auto *p = new Ion();
        //std::cout << "Address of p = " << p << '\n';
        auto p = std::make_shared<Ion>(); // creates a shared pointer that manages a new object.
        std::cout << "  Address of p = " << p.get() << '\n'; // get() returns the stored pointer.

        std::cout << "  Store p into IonList\n";
        if (i <= 4 ) smartIonList.emplace_back(p);

        if (i == 4) {
            std::cout << "  Clear IonList\n";
            smartIonList.clear();
        }
    }
    return 0;
}

