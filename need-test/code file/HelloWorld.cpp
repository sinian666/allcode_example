#include <iostream>
#include "HelloWorld.h"
using namespace std;

int main()
{
    HelloWorld hw;
    hw.sayHelloWorld();
    return 0;
}

void HelloWorld::sayHelloWorld()
{
    cout <<"\nHello World"<< endl;
}