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
  auto el = Ellipse( 3.0, 4.0 );
    string name1 = el.shapeName();
    double space1= el.area();

  auto ptr = new Ellipse( 5.0, 6.0 ); 
    string name2 = ptr->shapeName();
    double space2= ptr->area();  

  cout << name1 << " : " << space1 << endl;
  cout << name2 << " : " << space2 << endl;
}

