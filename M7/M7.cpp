#include <iostream>
#include "IntegerArray.h"
#include "Exc.h"
#include <exception>
int main()
{
    try
    {
        IntegerArray array(10);
        //IntegerArray array(0);
        for (int i{ 0 }; i < 10; ++i)
            array[i] = i + 1;
        array.resize(8);
        array.insertBefore(20, 5);
        //array.insertBefore(20, 11);
        array.remove(3);
        //array.remove(11);
        array.insertAtEnd(30);
        array.insertAtBeginning(40);
        {
            IntegerArray b{ array };
            b = array;
            b = b;
            array = array;
        }
        for (int i{ 0 }; i < array.getLength(); ++i)
            std::cout << array[i] << ' ';
        std::cout << '\n';
        int element = 20;
        int tmp = array.find(array, element);
        if (tmp == -1)
            std::cout << "Not found";
        else
            std::cout << "Element :" << element << ", number of array :" << tmp;
    }
    catch (std::exception& e)
    {
        std::cout << e.what();
    }
    return 0;
}