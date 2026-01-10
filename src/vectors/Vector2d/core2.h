#include "precision2.h"

namespace cyclone2 {
    class Vector2 {
    public:
        real x,y;
    private:

    public:

        // Constructor (Empty)
        Vector2(): x(0), y(0){}

        // Constructor (Assigned values)
        Vector2(real x, real y): x(x), y(y){}

        //----------MY OWN CODE FOR PRINTING THE WHOLE THING
        friend std::ostream& operator<<(std::ostream& os, const Vector2& v) {
            os << "(" << v.x << ", " << v.y << ")";
            return os;
        }

        // Inverts the Vector
        void invert() {
            x = -x;
            y = -y;
        }

        //---------------------------------------------------------------

        // Magnitude of the vector
        real magnitude() const{
            return real_sqrt(x*x + y*y );
        }

        // Square magnitude of the vector (Since it doesn't take the Sqrt)
        real squareMagnitude() const {
            return x*x + y*y;
        }

        // Calculates the unit vector
        void normalize() {
            real l = magnitude();
            if (l > 0) {
                (*this) *= (real(1)/l);
            }

        }

        // Adds a vector that was previously multiplied by a scalar
        void addScaledVector(const Vector2& v, real scale)
        {
            x += v.x * scale ;
            y += v.y * scale ;
        }
        //---------------------------------------------------------------
        //HADAMARD PRODUCT/COMPONENT-WISE PRODUCT

        // Changes vector:
        void componentProductUpdate(const Vector2 &vector) //why does the book change the style of referencing? IDK
        {
            x *= vector.x;
            y *= vector.y;
        }

        // Returns new vector:
        Vector2 componentProduct(const Vector2 &vector) const
        {
            return Vector2(x * vector.x, y * vector.y);
        }
        // SCALES THE VECTOR BY A VALUE

        //Changes vector:
        void operator *= (const real value)
        {
            x *= value;
            y *= value;
        }

        // Returns new vector:
        Vector2 operator*(const real value) const
        {
            return Vector2(x*value, y*value);
        }

        //---------------------------------------------------------------
        //ADDS THE VECTOR WITH ANOTHER

        // Changes vector:
        void operator += (const Vector2& v)
        {
            x += v.x;
            y += v.y;
        }

        // Returns new vector:
        Vector2 operator+(const Vector2& v) const
        {
            return Vector2(x+v.x, y+v.y);
        }
        //---------------------------------------------------------------
        //SUBSTRACT THE VECTOR BY A VALUE:

        // Changes vector:
        void operator -= (const Vector2& v)
        {
            x -= v.x;
            y -= v.y;
        }

        // Returns new vector:
        Vector2 operator-(const Vector2& v) const
        {
            return Vector2(x-v.x, y-v.y);
        }

        //---------------------------------------------------------------
        //DOT PRODUCT/SCALAR PRODUCT (Returns a Scalar not a VECTOR):

        real scalarProduct(const Vector2& vector) const
        {
            return (x * vector.x + y * vector.y);
        }

        real operator *(const Vector2 &vector) const
        {
            return x*vector.x + y*vector.y;
        }
        //---------------------------------------------------------------
        //VECTOR PRODUCT/ CROSS PRODUCT
        //so this is the explicit way of calculating the vector product
        //straight up just call the damn thing




    };
}