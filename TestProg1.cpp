#include <iostream>
#include "OneStream.h"
int main()
{
    setlocale(LC_ALL, "RUS");
    std::string inputString;
    OneStream onestream(inputString);
    onestream.inputValue();

}
