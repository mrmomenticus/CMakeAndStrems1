#include <iostream>
#include "OneStream.h"
#include <vector>
int main()
{

    setlocale(LC_ALL, "RUS");
    std::string inputString;
    std::vector <char> buffer;
    OneStream onestream(inputString);
    onestream.inputValue();
    onestream.bufferFilling(buffer);

}
