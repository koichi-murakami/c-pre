#include <iostream>
using namespace std;

class Solid {
  public:
    Solid( ) = default;
    virtual ~Solid( ) = default;
    virtual double volume() = 0;
    virtual string shapeName() = 0;
  protected:
    const double pi = 3.14159265;    
};

class Ellipsoid : public Solid {
  public:
    Ellipsoid( double x, double y, double z ){
      a = x; b = y; c = z; }
    double volume(){ return 4.0/3.0*pi*a*b*c; }
    string shapeName(){ return "Ellipsoid"; }
  private:
    double a, b, c;
};

class Box : public Solid {
  public:
    Box( double x, double y, double z ){
      a = x; b = y; c = z; }
    double volume(){ return a*b*c; }
    string shapeName(){ return "Box"; }
  private:
    double a, b, c;
};

int main() {
  Ellipsoid el( 4.0, 5.0, 6.0 );
  Box bx( 4.0, 5.0, 6.0 );
//  Solid sv;
  Solid* ptSolid;

  ptSolid = &el;
    cout << "Shape: " << ptSolid->shapeName() << endl;
    cout << "Volume:" << ptSolid->volume()    << endl;
  ptSolid = &bx;
    cout << "Shape: " << ptSolid->shapeName() << endl;
    cout << "Volume:" << ptSolid->volume()    << endl; 
//  ptSolid = &sv;
//   cout << "Shape: " << ptSolid->shapeName() << endl;
//   cout << "Volume:" << ptSolid->volume()    << endl;
}

