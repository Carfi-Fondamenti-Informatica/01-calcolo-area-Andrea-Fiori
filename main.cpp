#include <iostream>
using namespace std;

int main(){

float a=0, b=0, c=0;
  
cin >> a >> b >> c;
  
float area_triangolo= (a*b)/2;
float area_quadrato= a*a;
float area_rettangolo= a*b;
float area_trapezio= ((a+b)*c)/2;

cout << area_triangolo << endl;
cout << area_quadrato << endl;
cout << area_rettangolo << endl;
cout << area_trapezio;

return 0;
}
