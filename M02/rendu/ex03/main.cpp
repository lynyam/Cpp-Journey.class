#include "Fixed.hpp"
#include "Point.hpp"


void test_case(const char *label, const Point& A, const Point& B, const Point& C, const Point& P)
{
    std::cout << label << " : P(" << P.getX() << ", " << P.getY() << ") -> ";
    bool inside = bsp(A, B, C, P);
    std::cout << (inside ? "INSIDE" : "OUTSIDE") << std::endl;
}

int main()
{
    // Triangle ABC
    Point A(0.0f, 0.0f);
    Point B(10.0f, 0.0f);
    Point C(0.0f, 10.0f);

    // 1) Strictly inside
    Point P1(3.0f, 3.0f);

    // 2) On an edge (BC)
    Point P2(10.0f, 0.0f);

    // 3) On a vertex (A)
    Point P3(0.0f, 0.0f);

    // 4) Outside
    Point P4(10.0f, 10.0f);

    std::cout << "==== BSP FIXED TESTS ====" << std::endl;

    test_case("Inside   ", A, B, C, P1);
    test_case("On edge  ", A, B, C, P2);
    test_case("On vertex", A, B, C, P3);
    test_case("Outside  ", A, B, C, P4);

    std::cout << "==========================" << std::endl;
    return 0;
}

