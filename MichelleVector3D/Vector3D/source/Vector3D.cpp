#include "Vector3D.h"
#include <iostream>
#include <cmath>

Vector3D::Vector3D(){
    xVal=0;
    yVal=0;
    zVal=0;

}

Vector3D::Vector3D(float x, float y, float z) {
    xVal=x;
    yVal=y;
    zVal=z;
}

Vector3D::Vector3D(const Vector3D* vec){
	Vector3D(vec->xVal, vec->yVal, vec->zVal);
  
}

Vector3D* Vector3D::operator+(const Vector3D &rhs){
    float finalX=rhs.xVal+this->xVal;
    float finalY=rhs.yVal+this->yVal;
    float finalZ=rhs.zVal+this->zVal;
   
    return new Vector3D(finalX, finalY, finalZ);

}

Vector3D* Vector3D::operator-(const Vector3D &rhs){
    float finalX=(-rhs.xVal)+this->xVal;
    float finalY=(-rhs.yVal)+this->yVal;
    float finalZ=(-rhs.zVal)+this->zVal;
    return new Vector3D(finalX, finalY, finalZ);


}

Vector3D* Vector3D::operator*(float scalar){
    float finalX=scalar*this->xVal;
    float finalY=scalar*this->yVal;
    float finalZ=scalar*this->zVal;
    Vector3D myVector=Vector3D(finalX, finalY, finalZ);
    return new Vector3D(finalX, finalY, finalZ);

}

Vector3D* Vector3D::operator/(float scalar){
    float finalX=this->xVal/scalar;
    float finalY=this->yVal/scalar;
    float finalZ=this->zVal/scalar;
    Vector3D myVector=Vector3D(finalX, finalY, finalZ);
    return new Vector3D(finalX, finalY, finalZ);
}

 void Vector3D::operator+=(const Vector3D &rhs){
    this->xVal=(rhs.xVal)+this->xVal;
    this->yVal=(rhs.yVal)+this->yVal;
    this->zVal=(rhs.zVal)+this->zVal;
 }
 void Vector3D::operator-=(const Vector3D &rhs){
    this->xVal=(-rhs.xVal)+this->xVal;
    this->yVal=(-rhs.yVal)+this->yVal;
    this->zVal=(-rhs.zVal)+this->zVal;

 }
 void Vector3D::operator*=(float scalar){
    this->xVal=scalar*this->xVal;
    this->yVal=scalar*this->yVal;
    this->zVal=scalar*this->zVal;
 }
 void Vector3D::operator/=(float scalar){
    this->xVal=this->xVal/scalar;
    this->yVal=this->yVal/scalar;
    this->zVal=this->zVal/scalar;

 }
 void Vector3D::operator=(const Vector3D& rhs){
    this->xVal=(rhs.xVal);
    this->yVal=(rhs.yVal);
    this->zVal=(rhs.zVal);
 }

bool Vector3D::operator==(const Vector3D &rhs){
    bool returnVal=true;
    if(this->xVal!=rhs.xVal||this->yVal!=rhs.yVal||this->zVal!=rhs.zVal){
        returnVal=false;
    }

    return returnVal;

}

bool Vector3D::operator!=(const Vector3D &rhs){
    bool returnVal=true;
    if(this->xVal==rhs.xVal&&this->yVal==rhs.yVal&&this->zVal==rhs.zVal){
        returnVal=false;
    }

    return returnVal;

}

 void Vector3D::operator-(){
    this->xVal=(-this->xVal);
    this->yVal=(-this->yVal);
    this->zVal=(-this->zVal);    

 }

  float Vector3D::Magnitude(){
    //square values add them up and the sqrt
    float sqrtVal=(this->xVal*this->xVal)+(this->yVal*this->yVal)+(this->zVal*this->zVal);
    float returnVal=sqrt(sqrtVal);
    return returnVal;

  }

  void Vector3D::Normalize(){
    operator/=(Magnitude());
  }

 std::istream& operator>>(std::istream& is, Vector3D& rhs){
    is>>rhs.xVal>>rhs.yVal>>rhs.zVal;


 }
 std::ostream& operator<<(std::ostream& os, const Vector3D& vec){
    os<<"["<<vec.xVal<<","<<vec.yVal<<","<<vec.zVal<<"]"<<std::endl;

 }

void Vector3D::Print()
{
    std::cout << "(" << xVal << ", " << yVal << ", " << zVal << ")" << std::endl;
}