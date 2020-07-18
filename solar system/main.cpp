#include <iostream>

//header files
#include "solarSystem.h"

using namespace std;

int main()
{
	cout << "Author: Alexander Hernandez\n" << endl;
	cout << "\tSolar System\n" << endl;	

	solarSystem sun;

	sun.setRadius(695700);

	cout << "Solar Radius: " << sun.getRadius() << endl;
	cout << "Solar Volume: " << sun.calcVolume() << endl;
	return 0;
}
