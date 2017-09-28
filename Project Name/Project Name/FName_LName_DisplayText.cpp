/*
Steven Romero - 9/22/17 3rd Period
Displaying Text : * 
Displaying text in a screen 
*/
// Libraries
#include <iostream> // gives access to cin, cout, end1, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()
// Namespaces
using namespace std; //*
// Funcions()
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '/n';
}
// MAIN
void main() {
	// Define and Assign your variable(s)
	// Display Text
	pause(); // pauses to see the displayed text
}
