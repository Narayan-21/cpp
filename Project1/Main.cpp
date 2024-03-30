#include <iostream>


/// cout: console output
/// endl : end line
/// cin.get() : wait for us to press ENTER to move to the next line of the program
/// By default, main() returns 0
/// Below is the declaration of the function defined in the another file.
void Log(const char* message);

int main()
{
	Log("Hello World");
	std::cin.get();
}