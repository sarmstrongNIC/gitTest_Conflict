#include <iostream>

using namespace std;

void say(string s, string r);
int add(int a, int b, int c, int d);

int main()
{
    say("hi", "bye");
    
    cout << add(45,10, 4, 1) << endl;

    cout << "test" << endl;
    return 0;
}

void say(string s, string r)
{
    cout << s << " and " << r << endl;
}
int add(int a, int b, int c, int d)
{
    return a + b + c + d;
}