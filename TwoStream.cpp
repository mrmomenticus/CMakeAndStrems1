#include "TwoStream.h"
void TwoStream::threadExecution(){
    std::cout << "Значение в буфере: "<<std::endl;
    std::cout << m_twostring<<std::endl;
    int s = 0;
    for_each(m_twostring.begin(), m_twostring.end(), [&s](char c)
    {
        if (isdigit(c))
        {
            s += (c - '0');
        }
    } );
    std::cout << "Сумма чисел: " << s<<std::endl;

}
