#include <iostream>

#define PI 3.1415926536 //Defined Constant

using namespace std;

int main()
{
    /* 
      EXAMPLE 1 
    */
    cout << "Hello World"; //This line displays a message "Hello World" onto the screen 
    cout << "This is a C++ class."; //This line displays another message onto the screen

    /* 
      EXAMPLE 2 
    */
    // Declaration & Definition 
    int num1;
    int num2;
    int sum;

    // Getting Inputs 
    cout << "Enter the first number: ";
    cin >> num1;
    cout <<" Enter the second number: ";
    cin >> num2;

    // Calculation and storing result 
    sum = num1 + num2;
    // Display output 
    cout << "The sum is: " << sum;

    /* 
      EXAMPLE 3 
    */
    // String Constants
    cout << "";                   //Empty String
    cout << "h";                  //Single length string
    cout << "Hello World\n";      //String followed by new line
    cout << "'Good' Morning";     //'Good' Morning
    cout << "\"Good\" Morning";   //"Good" Morning

    /*
      EXAMPLE 4
      Three ways to use constants.
    */
    const double pi = 3.1415926536;   //Memory Constant

    cout << "Defined constant PI: " << PI << endl;
    cout << "Memory constant pi: " << pi << endl;
    cout << "Literal constant: " << 3.1415926536 << endl;
    
    /* 
      EXAMPLE 5 
    */
    //Integer data type conversions & Decimal/Float data type conversions 
    cout << sizeof(56) << endl;    //The size displayed is 4 bytes(default data type is 'int')
    cout << sizeof(56L) << endl;   //The size displayed is 8 bytes('L' stands for 'long'/'long int' data type)
    
    cout << sizeof(20.5) << endl;   //The size displayed is 8 bytes(default data type is 'double')
    cout << sizeof(20.5F) << endl;  //The size displayed is 4 bytes('F' stands for 'float' data type)
    cout << sizeof(20.5L); //The size displayed is 16 bytes('L' stands for 'long' data type)
    
    return 0;
}
