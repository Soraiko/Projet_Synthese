#include <stdlib.h>
#include <stdio.h>
#include "geometry.h"
#include "list.h"
#include "tree.h"
#include "algo.h"

int main() {
  allPairs((char*) "../data/input", (char*) "../data/output");
  BentleyOttmmann((char*) "../data/input", (char*) "../data/output2");
  return EXIT_SUCCESS;
}
