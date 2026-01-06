#include "precision2.h"
#include "../../../cmake-build-debug/_deps/freetype-src/src/sdf/ftsdfcommon.h"

class Vector2 {
public:
    real x,y;



public:
    Vector2(): x(0), y(0){}

    Vector2(real x, real y): x(x), y(y){}

    friend std::ostream& operator<<(std::ostream& os, const Vector2& v) {
        os << "(" << v.x << ", " << v.y << ")";
        return os;
    }
    void invert() {
        x = -x;
        y = -y;
    }

    real magnitude() const{
        return square_root(x*x + y*y );
    }

    void normalize() {
        real l = magnitude();
        if (l > 0) {
            (*this) *= (real(1)/l);
        }

    }

    void operator *=(const real value ) {
        x*= value;
        y*= value;
    }

};
