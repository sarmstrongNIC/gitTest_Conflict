#include <iostream>

using namespace std;

void say(string s);
int add(int a, int b);

int main()
{
    say("hi");
    
    cout << add(4,9) << endl;

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