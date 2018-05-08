#ifndef VECTOR3D_H
#define VECTOR3D_H
#include <iostream>
class Vector3D
{
public:
    Vector3D();
    Vector3D(float x, float y, float z);
    Vector3D(const Vector3D* vec);
    Vector3D* operator+(const Vector3D &rhs);
    Vector3D* operator-(const Vector3D &rhs);
    Vector3D* operator*(float scalar);
    Vector3D* operator/(float scalar);
    void operator+=(const Vector3D &rhs);
    void operator-=(const Vector3D &rhs);
    void operator*=(float scalar);
    void operator/=(float scalar);
    void operator=(const Vector3D& rhs);
    void operator-();
    bool operator==(const Vector3D &rhs);
    bool operator!=(const Vector3D &rhs);
    void Print();
     float Magnitude();//length of vector – HOW DO YOU COMPUTE THIS?
    void Normalize();//create unit vector (length is 1) – HOW DO YOU DO THIS?
   friend std::istream& operator>>(std::istream& is, Vector3D& rhs);
   friend std::ostream& operator<<(std::ostream& os, const Vector3D& vec);
private:
    float xVal;
    float yVal;
    float zVal;
};
#endif