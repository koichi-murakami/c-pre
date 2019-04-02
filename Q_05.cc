#include <iostream>
using namespace std;

class Ellipse {
  public:            
    Ellipse( ) = default;
    Ellipse( double x, double y ){ a = x; b = y; }
   ~Ellipse( ) = default;            
    double area(){ return pi*a*b; }
    string shapeName(){ return "Ellipse"; }
  private:
    double a, b;
    const double pi = 3.14159265;    
};

int main() {
  Ellipse el( 3.0, 4.0 );
    cout << "Shape: " << el.shapeName() << endl;
    cout << "Area:  " << el.area()      << endl;
}

