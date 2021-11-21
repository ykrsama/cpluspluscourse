//
// Created by xuliang on 2021/11/20.
//
#include "pointers.hpp"

int main() {
/// Q1 : Use delete to fix the memory leak?

/// Q2 : Or use shared_ptr to replace the raw pointer?

    for (int i = 0; i < 10; i++) {
        auto *p = new Ion();
        std::cout << "  Address of p = " << p << '\n';

        std::cout << "  Store p into IonList\n";
        if (i <= 4) rawIonList.emplace_back(p);

        if (i == 4) {
            std::cout << "  Clear IonList\n";
            rawIonList.clear();
        }
    }
    return 0;
}


