#include <iostream>

#include "team.h"


void stooges() {
    Team t("stooges");
    t.add("Larry");
    t.add("Curly");
    t.add("Moe");
    std::cout << "stooges count " << t.count() << std::endl;
}

int main() {
    stooges();
}

