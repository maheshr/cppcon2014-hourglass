#include <iostream>

#include "team.h"

void stooges() {
  Team t("stooges");
  t.add("Larry");
  t.add("Curly");
  t.add("Moe");

  std::cout << "stooges count " << t.count() << std::endl;
}

void dwarves() {
  Team t("dwarves");
  t.add("Grumpy");
  t.add("Dopey");
  t.add("Happy");
  t.add("Sleepy");
  t.add("Bashful");
  t.add("Sneezy");
  t.add("Doc");

  std::cout << "dwarf count " << t.count() << std::endl;
}

int main() {
  stooges();
  dwarves();
}

