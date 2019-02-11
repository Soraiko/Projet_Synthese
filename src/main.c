#include <stdlib.h>
#include "../include/algo.h"
#include "../include/tree.h"

int main (int argc, char *argv[])
{
    List *segs = load_segments("data/input");
    AfficherSegments(segs);
    list_destroy(segs);
    return 0;
}
