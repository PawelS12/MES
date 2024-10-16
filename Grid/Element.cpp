#include "Element.h"

Element::Element() {
    for (int i = 0; i < 4; i++) {
        ID[i] = 0;
    }
}

void Element::set_ID(int node_1, int node_2, int node_3, int node_4) {
    ID[0] = node_1;
    ID[1] = node_2;
    ID[2] = node_3;
    ID[3] = node_4;
}

void Element::display_ID() {
    for (int i = 0; i < sizeof(ID) / sizeof(ID[0]); i++) {
        std::cout << ID[i] << " ";
    }
    std::cout << std::endl;
}