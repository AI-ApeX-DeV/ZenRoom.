#include<iostream>
using namespace std;
#include<string>
#include<iomanip>
#include<limits>
#include<cmath>

int add(int a,int b)
{
    return a+b;
}


int main()
{
    int num1=14;
    int num2=017;
    int num3=0x1F;
    int num4=0b111;

    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;
    cout<<num4<<endl;
    // hecademical are most widely used since they are more human readable like any 8 digit can be represented by only 2 hexadecimal digits
    // binary is used in embedded systems
    // octal is used in unix systems
    // decimal is used in general

    /*types of initialization*/

    int a=3; // assignment initialization
    int b(3); // direct initialization
    int c{3}; // uniform initialization
    int d={a+b}; // brace initialization
    int e(a+b); // funciton initialization

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;

    cout<<sizeof(a)<<endl; // sizeof is an operator which returns the size of the variable in bytes

    short var1=5; // size of short is 2 bytes
    short int var2=5; 
    signed short int var3=5; 
    unsigned short int var4=5; 

    long var5=5; // size of long is 4 bytes 
    long int var6=5;
    signed long int var7=5;
    unsigned long int var8=5;

    long long var9=5; // size of long long is 8 bytes
    long long int var10=5;
    signed long long int var11=5;
    unsigned long long int var12=5;

    float number1=5.5f; // size of float is 4 bytes and precision is 7 digits
    double number2=5.5; // size of double is 8 bytes and precision is 15 digits
    long double number3=5.5L; // size of long double is 12 bytes and precision is 19 digits

    bool red=true; // size of bool is 1 byte
    cout<<red<<endl;

    char character='A'; // size of char is 1 byte
    cout<<character<<endl;
    char newcharacter=65; // 65 is the ascii value of A
    cout<<newcharacter<<endl;
    cout<<static_cast<int>(character)<<endl; // static_cast is used to convert one data type to another

    auto variable=5; // auto is used to automatically detect the data type of the variable
    cout<<variable<<endl;
    auto variable2=5.5; // this will be interpreted as double
    cout<<variable2<<endl;
    auto variable3=5.5f; // this will be interpreted as float
    cout<<variable3<<endl;
    auto variable4=5.5L; // this will be interpreted as long double
    cout<<variable4<<endl;
    auto variable5='A'; // this will be interpreted as char
    cout<<variable5<<endl;
    auto variable6=true; // this will be interpreted as bool
    cout<<variable6<<endl;
    auto variable7=5LL; // this will be interpreted as long long
    cout<<variable7<<endl;
    auto variable8=5U; // this will be interpreted as unsigned int
    cout<<variable8<<endl;
    auto variable9=5UL; // this will be interpreted as unsigned long
    cout<<variable9<<endl;

    // precedence and associativity
    // precedence is the order in which the operators are evaluated
    // associativity is the order in which the operators are evaluated when they have the same precedence
/*# Operator Precedence and Associativity in C++

## Operator Precedence

**Precedence** refers to the order in which operators are evaluated in an expression. Operators with higher precedence are evaluated before operators with lower precedence.

- Unary operators: `+`, `-`, `++`, `--`, `!`, etc.
- Multiplicative operators: `*`, `/`, `%`
- Additive operators: `+`, `-`
- Shift operators: `<<`, `>>`
- Relational operators: `<`, `<=`, `>`, `>=`
- Equality operators: `==`, `!=`
- Bitwise AND: `&`
- Bitwise XOR: `^`
- Bitwise OR: `|`
- Logical AND: `&&`
- Logical OR: `||`
- Assignment operators: `=`, `+=`, `-=`, `*=`, `/=`, etc.

Parentheses `()` can be used to explicitly specify the order of evaluation.

## Operator Associativity

**Associativity** defines the order in which operators of the same precedence are evaluated. It can be left-to-right (left-associative) or right-to-left (right-associative).

- **Left-Associative:** Most binary operators, e.g., `2 + 3 + 4` is equivalent to `(2 + 3) + 4`.
- **Right-Associative:** The assignment operator (`=`), e.g., `int a = b = 5` is equivalent to `int a = (b = 5)`.
- **Non-Associative:** Some operators, like the ternary conditional operator (`?:`), require parentheses to chain them properly.

Understanding both precedence and associativity is crucial for writing correct expressions in C++. Always use parentheses when in doubt, especially if you want to override the default order of evaluation.
*/
    // preincrement and postincrement
    int x=5;
    int y=++x; // preincrement
    cout<<x<<endl;
    cout<<y<<endl;
    int z=x++; // postincrement
    cout<<x<<endl;
    cout<<z<<endl;


    // output formatting
    cout<<"OUTPUT FORMATTING"<<endl;
    cout<<boolalpha;
    a=true;
    b=false;
    cout<<a<<endl;
    cout<<b<<endl;

    cout<<showpos; // will show the sign of the number
    cout<<a<<endl;

    a=25;
    cout<<hex<<a<<oct<<a<<dec<<a<<endl; // will print the number in hexadecimal,octal and decimal format

    cout<<uppercase<<a<<endl; // will print the number in uppercase

    cout<<showbase<<a<<endl; // will show the base of the number

    cout<<noshowpos<<a<<endl; // will not show the sign of the number

    cout<<setw(10)<<a<<endl; // will set the width of the number to 10

    cout<<setfill('*')<<setw(10)<<a<<endl; // will fill the empty spaces with *

    cout<<scientific<<a<<endl; // will print the number in scientific notation

    cout<<fixed<<a<<endl; // will print the number in fixed notation

    cout<<setprecision(2)<<a<<endl; // will set the precision of the number to 2

    cout<<showpoint<<a<<endl; // will show the decimal point

    


    //having some fun with limits

    numeric_limits<int> limits; // numeric_limits is a class which is used to get the limits of the data types
    cout<<limits.max()<<endl;
    cout<<limits.min()<<endl;
    cout<<limits.lowest()<<endl;
    cout<<limits.digits<<endl;

    numeric_limits<float> limits2;
    cout<<limits2.max()<<endl;
    cout<<limits2.min()<<endl;
    cout<<limits2.lowest()<<endl;
    cout<<limits2.digits<<endl;

    numeric_limits<double> limits3;
    cout<<limits3.max()<<endl;
    cout<<limits3.min()<<endl;
    cout<<limits3.lowest()<<endl;
    cout<<limits3.digits<<endl;

    numeric_limits<long double> limits4;
    cout<<limits4.max()<<endl;
    cout<<limits4.min()<<endl;
    cout<<limits4.lowest()<<endl;
    cout<<limits4.digits<<endl;

    numeric_limits<short> limits5;
    cout<<limits5.max()<<endl;
    cout<<limits5.min()<<endl;
    cout<<limits5.lowest()<<endl;
    cout<<limits5.digits<<endl;

    numeric_limits<long long> limits6;
    cout<<limits6.max()<<endl;
    cout<<limits6.min()<<endl;
    cout<<limits6.lowest()<<endl;
    cout<<limits6.digits<<endl;

    numeric_limits<char> limits7;
    cout<<limits7.max()<<endl;
    cout<<limits7.min()<<endl;
    cout<<limits7.lowest()<<endl;
    cout<<limits7.digits<<endl;

    numeric_limits<bool> limits8;
    cout<<limits8.max()<<endl;
    cout<<limits8.min()<<endl;
    cout<<limits8.lowest()<<endl;
    cout<<limits8.digits<<endl;

    /*float: 1 bit for the sign, 8 bits for the exponent, and 23 bits for the significand (fractional part).
double: 1 bit for the sign, 11 bits for the exponent, and 52 bits for the significand.
long double: The size and structure can vary, but it usually follows a similar pattern as double with more bits for both the exponent and significand.*/


    float weight=7.7f;
    cout<<floor(weight)<<endl; // will round down the number
    cout<<ceil(weight)<<endl; // will round up the number
    cout<<round(weight)<<endl; // will round the number
    cout<<trunc(weight)<<endl; // will truncate the number
    cout<<abs(weight)<<endl; // will return the absolute value of the number
    cout<<sqrt(weight)<<endl; // will return the square root of the number
    cout<<cbrt(weight)<<endl; // will return the cube root of the number
    cout<<pow(weight,2)<<endl; // will return the power of the number
    cout<<hypot(3,4)<<endl; // will return the hypotenuse of the number
    cout<<remainder(10,3)<<endl; // will return the remainder of the number
    cout<<fmod(10,3)<<endl; // will return the remainder of the number
    cout<<fmax(10,3)<<endl; // will return the maximum of the number
    cout<<fmin(10,3)<<endl; // will return the minimum of the number
    cout<<fdim(10,3)<<endl; // will return the positive difference of the number
    cout<<exp(2)<<endl; // will return the exponential of the number
    cout<<log(2)<<endl; // will return the natural logarithm of the number
    cout<<log10(2)<<endl; // will return the base 10 logarithm of the number
    cout<<log2(2)<<endl; // will return the base 2 logarithm of the number
    cout<<sin(2)<<endl; // will return the sine of the number
    cout<<cos(2)<<endl; // will return the cosine of the number
    cout<<tan(2)<<endl; // will return the tangent of the number


    for(size_t i=0;i<10;i++) // size_t occupies 8 bytes 
    {
        cout<<i<<endl;
    }

    // arrays in c++

    int array[5]={1,2,3,4,5}; // array is a collection of elements of same data type
    int array2[5]={1,2}; // this will initialize the first two elements of the array and the rest will be initialized to 0
    int array3[5]={}; // this will initialize all the elements of the array to 0
    int array4[]={1,2,3,4,5}; // this will initialize the array with the number of elements equal to the number of elements in the initializer list
    
    // using a range based for loop
    
    for(int i:array)
    {
        cout<<i<<endl;
    }
    // different ways to initialise a character array
    char name1[]={'A','B','C','D','E','\0'}; // this will initialize the array with the number of elements equal to the number of elements in the initializer list
    char name2[]="ABCDE"; // this will initialize the array with the number of elements equal to the number of elements in the initializer list
    char name3[6]="ABCDE"; // this will initialize the array with the number of elements equal to the number of elements in the initializer list
    char name4[6]={'A','B','C','D','E','\0'}; // this will initialize the array with the number of elements equal to the number of elements in the initializer list
    char name5[6]={'A','B','C','D','E'}; // this will initialize the array with the number of elements equal to the number of elements in the initializer list
    char name6[6]={'A','B','C','D','E','F'}; // this will initialize the array with the number of elements equal to the number of elements in the initializer list
    // note that if we dont use the null terminator then if we print the array , after the array it will print garbage values until it finds a null terminator
    
    // lets learn about pointers
    a=5;
    cout<<"lets learn about pointers"<<endl;
    int* cool=nullptr; // this is a null pointer
    cout<<cool<<endl;
    cout<<&cool<<endl; // this will print the address of the pointer
    //cout<<*cool<<endl; // this will print the value of the pointer
    int* cool2=&a; // this is a pointer which points to the address of a
    cout<<cool2<<endl;
    cout<<&cool2<<endl; // this will print the address of the pointer
    cout<<*cool2<<endl; // this will print the value of the pointer
    const char* cool3="hello"; // this is a pointer which points to the address of the first character of the string
    cout<<cool3<<endl;
    cout<<&cool3<<endl; // this will print the address of the pointer
    cout<<*cool3<<endl; // this will print the value of the pointer
    cout<<*(cool3+1)<<endl; // this will print the value of the pointer
    cout<<*(cool3+2)<<endl; // this will print the value of the pointer
    char cool4[]="hello"; // this is a pointer which points to the address of the first character of the string
    cout<<cool4<<endl;
    cout<<&cool4<<endl; // this will print the address of the pointer
    cout<<*cool4<<endl; // this will print the value of the pointer
    cout<<*(cool4+1)<<endl; // this will print the value of the pointer
    //note that we should not use pointer to define a string since it is a constant and we cannot change the value of a constant, we can only change the value if it is stored in a character array

    // avoiding these things in case of pointers

    int* cool5=nullptr; // this is a dangling pointer
    //*cool5=5; // this will lead to crash

    int* cool6;
    //*cool6=45; // this is bad since we are assigning value to a junk address

    // we can use the new keyword to allocate memory to a pointer at runtime and delete keyword to deallocate memory from a pointer at runtime using the heap memory

    int* cool7=new int; // this will allocate memory to the pointer at runtime
    *cool7=5;
    cout<<*cool7<<endl;
    delete cool7; // this will deallocate memory from the pointer at runtime
    // note that we should always deallocate memory from the pointer after using it 
    // if we dont deallocate memory from the pointer then it will lead to memory leak
    // if we try to access the pointer after deallocating memory from it then it will lead to dangling pointer
    // dont  use the delete keyword twice on the same pointer since it will lead to undefined behaviour
    cool7=nullptr; // dont forget to set the pointer to null after deallocating memory from it

    // lets learn about exceptions
    for (int i = 0; i < 100000000; i++) {
        try {
            int* cool8 = new int[i];
            cout << i << endl;
            delete[] cool8;  // Don't forget to free the allocated memory
        } catch (bad_alloc& e) {
            cout << "Exception occurred: " << e.what() << endl;
        }
    }

    // using the nothrow 

    for (int i = 0; i < 100000000; i++) {
        int* cool9 = new (nothrow) int[i];
        if (cool9 == nullptr) {
            cout << "Memory allocation failed!" << endl;
            break;
        }
        cout << i << endl;
        delete[] cool9;  // Don't forget to free the allocated memory
    }

    // note that we can call on a null pointer 




    /*  
    these are the multiple line comments
    */
    // this is the entry point of the program
    string name;
    int age;
    cout<<"Enter your name"<<endl;
    getline(cin,name);
    cout<<"Enter your age"<<endl;
    cin>>age;
    cout<<"Hello "<<name<<" you are "<<age<<" years old"<<endl;
    cout<<"hello world"<<endl;
    cout<<add(2,3)<<endl;

    return 0;


// LEARNING : comments /**/ cannot be nested 
// all the code is converted by the compiler into machine code
// Errors can be compile time, run time or warnings
// compile time errors are syntax errors
// run time errors are logical errors
// warnings are the errors which are not syntax errors but can cause problems
// statements are executed line by line from top to bottom,execution keeps going until there is a statement causing the program to terminate or run other sequence of statements
// 
// 

}