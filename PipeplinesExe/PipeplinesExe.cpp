// PipeplinesExe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "..\Application\Application.h"

int main()
{
    std::cout << "Hello World!\n";
    CoolClass coolClass;
    std::cout << "Hello UC "  << coolClass.Calc(1, 2);
}

