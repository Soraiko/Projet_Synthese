#include <stdlib.h>
#include "../include/algo.h"
#include "../include/tree.h"

int main (int argc, char *argv[])
{
    List *segs = load_segments("data/input");
    //AfficherSegments(segs);

    LNode *head = segs->head;
    /*head = head->next;
    head = head->next;
    head = head->next;*/

    Segment *s1 = (Segment*)(head->data);
    head = head->next;
    Segment *s2 = (Segment*)(head->data);

    PointF intersection = Intersection(s1,s2);

    printf("%f %f\n",
           intersection.x,
           intersection.y
           );

    s1 = (Segment*)(head->data);
    head = head->next;
    s2 = (Segment*)(head->data);

    intersection = Intersection(s1,s2);

    printf("%f %f\n",
           intersection.x,
           intersection.y
           );


    list_destroy(segs);
    return 0;
}
