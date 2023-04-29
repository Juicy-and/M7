#pragma once

#include <cassert> // for assert()

class IntegerArray
{
private:
    int m_length{};
    int* m_data{};

public:
    IntegerArray() = default;
    IntegerArray(int length);
    IntegerArray(const IntegerArray& a);
    ~IntegerArray();
    void erase();
    int& operator[](int index);
    // reallocate resizes the array.  Any existing elements will be destroyed.  This function operates quickly.
    void reallocate(int newLength);
    // resize resizes the array.  Any existing elements will be kept.  This function operates slowly.
    void resize(int newLength);
    IntegerArray& operator=(const IntegerArray& a);
    void insertBefore(int value, int index);
    void remove(int index);
    // A couple of additional functions just for convenience
    void insertAtBeginning(int value);
    void insertAtEnd(int value);
    int getLength() const;
    int find(const IntegerArray& a, const int findElem);
};
