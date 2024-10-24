#include <iostream>

using namespace std;

void say(string s);
int add(int a, int b);

int main()
{

    cout << "test" << endl;
    cout << "hello world" << endl;

    say("hi");
    
    cout << "Sum of 3 and 4 is: " << add(3,4) << endl;

    return 0;
}

void say(string s)
{
    cout << s << endl;
}
int add(int a, int b)
{
    return a + b;
}