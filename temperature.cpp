#include <iostream>
using namespace std;

int main()
{
double fahr, celsius;
cout << "Hi, welcome!" << endl;
cout << "Please enter the value is Celsius: ";
cin >> celsius;
fahr =  (double)9 / 5 * celsius + 32;// using cast expresion to change decimal 9 to double then the rest will be changed to double implicitly.
cout << "Value of " << celsius << " in Fahrenheit is " << fahr << endl;
cout << "goodbye user"<< endl;
return 0;
}
