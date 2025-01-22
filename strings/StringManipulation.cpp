#include <iostream>
#include <string>

using namespace std;

int main(void)
{

	string	S1 = "Good Morning ! This course for Learn STRING MANIPULATION ";

	// Length of the string
	cout << S1.length() << endl;

	// Add to the end of string
	cout << S1.append("Leet go") << endl;

	// Return the character at position 13
	cout << S1.at(13) << endl;

	// insert at position
	cout << S1.insert(12, " student") << endl;

	// print the next 12 letters from position 0
	cout << S1.substr(0, 12) << endl;

	// return position in the string 
	cout << S1.find("Learn") << endl;

	// Clear all strings letters
	S1.clear();
	cout << S1  << endl;


	/* string	x = "hello", y;

	y.assign(x);	//y = x;
	cout << "y = " <<  y << endl; */


	/*string	input;

	getline(cin, input); // handelle space
	cout << input << endl;*/

	/*string x = " hello I'm x ", y = " Hello I'm y ";

	cout << "x and y before swap : \n" << x << y << endl;
	x.swap(y);
	cout << "x and y After swap : \n" << x << y << endl;*/

	return (0);
}
