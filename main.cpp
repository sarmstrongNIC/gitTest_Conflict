#include <iostream>

using namespace std;

int add(int a, int b);

int main()
{

    cout << "test" << endl;
    cout << "hello world" << endl;
    cout << "Sum of 3 and 4 is: " << add(3,4) << endl;

    return 0;
}

int add(int a, int b)
{
    return a + b;
}