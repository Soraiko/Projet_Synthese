#include <stdio.h>
#include <stdlib.h>
#include "../include/geometry.h"


PointF Intersection(Segment* s1, Segment* s2)
{
    PointF output;
    output.x = 0.0/0.0;
    output.y = 0.0/0.0;

    Fonction f1 = GetFonction(s1);
    Fonction f2 = GetFonction(s2);

    float x1_start = ((s1->begin).x.num)/(float)((s1->begin).x.den);
    float y1_start = ((s1->begin).y.num)/(float)((s1->begin).y.den);
    float x1_end = ((s1->end).x.num)/(float)((s1->end).x.den);
    float y1_end = ((s1->end).y.num)/(float)((s1->end).y.den);

    float x2_start = ((s2->begin).x.num)/(float)((s2->begin).x.den);
    float y2_start = ((s2->begin).y.num)/(float)((s2->begin).y.den);
    float x2_end = ((s2->end).x.num)/(float)((s2->end).x.den);
    float y2_end = ((s2->end).y.num)/(float)((s2->end).y.den);

    float step1 = (x1_end-x1_start)/100;
    float step2 = (x2_end-x2_start)/100;
    float x1 = x1_start;
    float x2 = x2_start;

    while (abs(x1)<abs(x1_end) || abs(x2)<abs(x2_end))
    {

        float xDiff =  (float)abs(x1-x2);
        float yDiff =  (float)abs(GetOrdonne(f1, x1)-GetOrdonne(f2, x2));

        if (xDiff==0 && yDiff==0)
        {
            output.x = x1;
            output.y = GetOrdonne(f1, x1);

            //printf("%f %f\n\n",xDiff,yDiff);
            break;
        }

        if (abs(x1)<abs(x1_end))
            x1+=step1;
        if (abs(x2)<abs(x2_end))
            x2+=step2;
    }

    return output;
}

float GetOrdonne(Fonction f, float abscisse)
{
    return f.a*abscisse + f.b;
}

Fonction GetFonction(Segment* s)
{
    float x_start = ((s->begin).x.num)/(float)((s->begin).x.den);
    float y_start = ((s->begin).y.num)/(float)((s->begin).y.den);
    float x_end = ((s->end).x.num)/(float)((s->end).x.den);
    float y_end = ((s->end).y.num)/(float)((s->end).y.den);
    Fonction output;

    float diffX = x_end-x_start;
    float diffY = y_end-y_start;
    float a = diffY/diffX;
    float b = y_start - (a*x_start);
    output.a = a;
    output.b = b;

    return output;
}

/*
 * affiche le point p
 */
void display_point(const Point p) {
  printf("(");
  display_rational(p.x);
  printf(",");
  display_rational(p.y);
  printf(")");
}

/*
 * affiche le segment s
 */
void display_segment(const Segment s) {
  printf("from: ");
  display_point(s.begin);
  printf(" to: ");
  display_point(s.end);
}

/*
 * renvoie 1 si le point d'intersection key1 précède le point
 * d'intersection key2, 0 sinon
 */
int point_prec(Point key1, Point key2) {
  // A faire
  return;
}

/*
 * renvoie 1 si s1 précède s2, 0 sinon
 */
int seg_prec(Segment s1, Segment s2, Rational x) {
  // A faire
  return;
}

/*
 * renvoie 1 si s1 et s2 ont une intersection, 0 sinon
 */
int intersect(Segment s1, Segment s2) {
  // A faire
  return;
}

/*
 * calcule et renvoie le point d'intersection entre s1 et s2
 */
Point* getIntersectionPoint(Segment s1, Segment s2) {
  // A faire
  return;
}
