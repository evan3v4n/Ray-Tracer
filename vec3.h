#ifndef VEC3_H
#define VEC3_H

#include <iostream>
#include <cmath>

using std::sqrt;

class vec3 {
    public:
        double e[3];

        // Default constructors, if vec3 is called and empty, then its {0,0,0}. Otherwise the contents are as provided
        // Defining the contents of e

        vec3(): e{0,0,0} {}
        vec3(double e0, double e1, double e2) : e{e0, e1, e2} {}

        // x,y,z represent e[0], e[1], e[2], respectively
        double x() const { return e[0]; }
        double y() const { return e[1]; }
        double z() const { return e[2]; }

        // Overload operators. Unary - (makes contents negative), Array indexing (const), Array indexing (non-const) (allows e[i] to be changed)
        vec3 operator -() const { return vec3(-e[0], -e[1], -e[2]); }
        double operator()(int i) const { return e[i]; }
        double& operator()(int i) { return e[i]; }

        // Allows for "+=" operation on two vectors
        vec3& operator+=(const vec3 &v) {
            e[0] += v.e[0];
            e[1] += v.e[1];
            e[2] += v.e[2];
            return  *this;
        }

        // Allows for "*=" on a vector and a number
        vec3& operator*=(double t) {
            e[0] *= t;
            e[1] *= t;
            e[2] *= t;
            return *this;
        }

        // Scalar division
        vec3& operator/=(double t) {
            return *this *= 1/t;
        }

        // ∣v∣ = sqrt(x^2+y^2+z^2)
        double length() const {
            return sqrt(length_squared());
        }

        // ∣v∣^2 = x^2+y^2+z^2
        double length_squared() const {
            return e[0]*e[0] + e[1]*e[1] + e[2]*e[2];
        }
};

// point3 is just an alias for vec3, but useful for geometric clarity

using point3 = vec3;

// Vector Utility Functions
// Math operations

inline std::ostream& operator<<(std::ostream &out, const vec3 &v) {
    return out << v.e[0] << ' ' << v.e[1] << ' ' << v.e[2];
}

inline vec3 operator+(const vec3 &u, const vec3 &v) {
    return vec3(u.e[0] + v.e[0], u.e[1] + v.e[1], u.e[2] + v.e[2]);
}

inline vec3 operator-(const vec3 &u, const vec3 &v) {
    return vec3(u.e[0] - v.e[0], u.e[1] - v.e[1], u.e[2] - v.e[2]);
}

inline vec3 operator*(const vec3 &u, const vec3 &v) {
    return vec3(u.e[0] * v.e[0], u.e[1] * v.e[1], u.e[2] * v.e[2]);
}

inline vec3 operator*(double t, const vec3 &v) {
    return vec3(t * v.e[0], t * v.e[1], t * v.e[2]);
}

inline vec3 operator*(const vec3 &v,double t) {
    return t * v;
}

inline vec3 operator/(vec3 v, double t) {
    return (1/t) * v;
}

inline double dot(const vec3 &u, const vec3 &v) {
    return u.e[0] * v.e[0]
         + u.e[1] * v.e[1]
         + u.e[2] * v.e[2];
}

inline vec3 cross(const vec3 &u, const vec3 &v) {
    return vec3(u.e[1] * v.e[2] - u.e[2] * v.e[1],
                u.e[2] * v.e[0] - u.e[0] * v.e[2],
                u.e[0] * v.e[1] - u.e[1] * v.e[0]);
}

inline vec3 unit_vector(vec3 v) {
    return v / v.length();
}

#endif