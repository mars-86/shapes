#ifndef _SHAPES_LIB_2D_LINE_INCLUDED_H_
#define _SHAPES_LIB_2D_LINE_INCLUDED_H_
#pragma once

#include <cmath>
#include "../base/shape2d.h"

namespace shapes {

template <typename T>
class LineT : public Shape2DT<T> {
public:
	LineT(T x1, T y1, T x2, T y2)
		: _x1(x1), _y1(y1), _x2(x2), _y2(y2)
	{
        this->_set_center({(x1 + x2) >> 1, (y1 + y2) >> 1});
        _build();
	}

	~LineT()
	{
		this->_points.clear();
	}

    LineT<T> &operator=(LineT<T> &line)
    {
        _x1 = line._x1;
        _y1 = line._y1;
        _x2 = line._x2;
        _y2 = line._y2;

        return *this;
    }

private:
	T _x1, _y1, _x2, _y2;

	void _build(void)
	{
        T x1 = _x1, y1 = _y1, x2 = _x2, y2 = _y2;
		T dx = std::abs(x2 - x1),
            sx = x1 < x2 ? 1 : -1,
			dy = -std::abs(y2 - y1),
			sy = y1 < y2 ? 1 : -1,
			e1 = dx + dy;  /* error value e_xy */
		while (true){   /* loop */
#ifdef __DEBUG
            std::cout << "x1:" << x1 << " y1:" << y1 << " e1:" << e1 << std::endl;
            std::getchar();
#endif // __DEBUG
			this->_points.push_back({ x1, y1 });
			if( x1 == x2 && y1 == y2) break;
			int e2 = e1 << 1;
			if (e2 >= dy){
				e1 += dy; /* e_xy+e_x > 0 */
				x1 += sx;
			}
			if (e2 <= dx){ /* e_xy+e_y < 0 */
				e1 += dx;
				y1 += sy;
			}
		}
#ifdef __DEBUG
    for (auto i : this->_points) std::cout << i;
#endif // __DEBUG
	}

};

typedef LineT<int> Line;
typedef LineT<double> LineF;

} // namespace shapes

#endif // !_SHAPES_LIB_2D_LINE_INCLUDED_H_
