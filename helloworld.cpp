#include <iostream>
using namespace std;
// Comment
/* Multi line Comments
Here they are */
int main()
{
    cout << "Hello Very Big WorldP \n";
    cout << "Have a good day!" << "\n";
    cout << 3 << "\n";
    cout << 2 * 5 << "\n";
    int myNum = 15;  // myNum is 15
    double myFloatNum = 5.99;    // Floating point number (with decimals)
    char myLetter = 'D';         // Character
    string myText = "Hello";     // String (text)
    bool myBoolean = true;       // Boolean (true or false)
    myNum = 10;  // Now myNum is 10, overwritten old numvber "15"
    double Sum = myNum + myFloatNum;
    cout << "All the Variables" << myNum << myFloatNum << myLetter << myText << myBoolean << "\n" << Sum;  // Outputs All
return 0;
}
