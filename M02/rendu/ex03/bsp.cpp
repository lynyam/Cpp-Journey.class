#include "Point.hpp"
#include "Fixed.hpp"

Fixed	area2(Point const &a, Point const &b, Point const &c)
{
    Fixed bx_ax = b.getX() - a.getX();
    Fixed cy_ay = c.getY() - a.getY();
    Fixed by_ay = b.getY() - a.getY();
    Fixed cx_ax = c.getX() - a.getX();

    return (bx_ax * cy_ay) - (by_ay * cx_ax);
}

bool	bsp(const Point& a, const Point& b, const Point& c, const Point& p) {
    Fixed A = area2(a, b, c);
    if (A == Fixed(0))
        return false;

    Fixed A1 = area2(p, b, c);
    Fixed A2 = area2(a, p, c);
    Fixed A3 = area2(a, b, p);

    // Strict : aucune aire ne doit être nulle
    if (A1 == Fixed(0) || A2 == Fixed(0) || A3 == Fixed(0))
        return false;

    bool positive = (A > Fixed(0));

    return
        ((A1 > Fixed(0)) == positive) &&
        ((A2 > Fixed(0)) == positive) &&
        ((A3 > Fixed(0)) == positive);
}
