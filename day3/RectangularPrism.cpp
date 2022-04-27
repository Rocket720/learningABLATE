#include <iostream>

using namespace std;

// Calculates the geometric properties for a Rectangular Prism
// Shoutout to Ms. Mudrauskas, she a real G

int main() {

    typedef unsigned int UINT;
    typedef unsigned long ULONG;

    UINT length = 125;
    UINT width = 1634;
    UINT height = 71316;

    ULONG surface_area = 2*length*width + 2*length*height + 2*width*height;
    ULONG volume = length * width * height;

    cout << "The dimensions have been defined as Length: " << length << " m, Width: " << width << " m, Height: " <<  height << " m \n";
    cout << "The Surface Area is " << surface_area << " m^2 \n";
    cout << "The Volume is " << volume << " m^3 \n";

}