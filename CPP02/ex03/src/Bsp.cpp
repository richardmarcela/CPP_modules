# include "Point.hpp"

static Fixed abs(Fixed x) {
    if (x < 0)
        return x * -1;
    return x;
}

static Fixed area(const Point a, const Point b, const Point c) {
    return abs(((a.getX() * (b.getY() - c.getY())) +
				(b.getX() * (c.getY() - a.getY())) +
				(c.getX() * (a.getY() - b.getY()))) / 2);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    return (area(a, b, c) == area(point, b, c) + area(a, point, c) + area(a, b, point));
}

/* abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);

x1 = x do p1
x2 = x do p2 
x3 = x do p3
y1 = y do p1
y2 = y do p2 
y3 = y do p3  */