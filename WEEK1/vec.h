#ifndef VECH
#define VECH

#include <cmath>
#include <iostream>
using namespace std;

class Vec3{
    private:
    float p[3];
    public:
    Vec3(float x,float y,float z){
        p[0] = x;
        p[1] = y;
        p[2] = z;
    }

    float operator[](int a) const{
        return p[a];
    }

    float operator[](int a){
        return p[a];
    }

    Vec3 operator-() const{
        return Vec3(-p[0],-p[1],-p[2]);
    } 
    Vec3 operator+(const Vec3& other) const{
        return Vec3(p[0] + other.p[0],p[1] + other.p[1],p[2] + other.p[2]);
    }
    Vec3 operator-(const Vec3& other) const{
        return Vec3(p[0] - other.p[0],p[1] - other.p[1],p[2] - other.p[2]);
    }
    Vec3 operator*(float scalar) const{
        return Vec3(p[0] * scalar ,p[1] * scalar ,p[2] * scalar );
    }
    friend Vec3 operator*(float scalar,const Vec3& other);

    Vec3 operator/(float scalar) const{
        return Vec3(p[0] / scalar ,p[1] / scalar ,p[2] / scalar );
    }

    float length() const{
        return sqrt(p[0]*p[0] + p[1]*p[1] + p[2]*p[2]);
    }

    Vec3 unit() const{
        float len = length();
        if(len != 0){
            return *this / length();
        }
        else{
            return *this;
        }
    }

    float dot(const Vec3& other) const{
        return p[0]*other.p[0]+p[1]*other.p[1]+p[2]*other.p[2];
    }

    Vec3 cross(const Vec3& other) const{
        return Vec3(p[1]*other.p[2]-p[2]*other.p[1] , p[2]*other.p[0]-p[0]*other.p[2] , p[0]*other.p[1]-p[1]*other.p[0]);
    }

    Vec3 reflect(const Vec3& normal) const{
        return   *this  - 2 * ((*this).dot(normal.unit())*normal.unit());
    }

    Vec3 refract(const Vec3& normal,float refractive_index) const{
        Vec3 x = -normal;
        Vec3 y = (normal.cross(*this)).cross(normal).unit();
        float si = (( ((normal.cross(*this)).length()) ) / (*this).length())*refractive_index;
        float co = sqrt(1 - si*si);
        return  (x*co+y*si).unit();
    }
};

Vec3 operator*(float scalar,const Vec3& other){
    return Vec3(other.p[0] * scalar ,other.p[1] * scalar ,other.p[2] * scalar );
}

void print(const Vec3& v) {
    cout << "(" << v[0] << ", " << v[1] << ", " << v[2] << ")\n";
}
#endif