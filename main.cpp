#include <iostream>

using namespace std;

void say(string s);

int main()
{

    cout << "test" << endl;
    cout << "hello world" << endl;

    say("hi");
    

    return 0;
}

void say(string s)
{
    cout << s << endl;
}