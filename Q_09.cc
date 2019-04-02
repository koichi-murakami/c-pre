#include <iostream>
using namespace std;

class Ellipse {
  public:            
    Ellipse( ) = default;            
    Ellipse( double x, double y ){ a = x; b = y; }
   ~Ellipse( ) = default;            
    double area(){ return pi*a*b; }
    string shapeName(){ return "Ellipse"; }
  protected:
    double a, b;
    const double pi = 3.14159265;    
};

class Ellipsoid : public Ellipse {
  public:            
    Ellipsoid( ) = default;
    Ellipsoid( double x, double y, double z ){
      a = x; b = y; c = z; }
    double volume(){ return 4.0/3.0*pi*a*b*c; }
    string shapeName(){ return "Ellipsoid"; }
  private:
    double c;
};

int main() {
  Ellipse el_2d( 3.0, 4.0 );
    cout << "Shape: " << el_2d.shapeName() << endl;
    cout << "Area:  " << el_2d.area()      << endl;
  Ellipsoid el_3d( 4.0, 5.0, 6.0 );
    cout << "Shape: " << el_3d.shapeName() << endl;
    cout << "Volume:" << el_3d.volume()    << endl;
}

