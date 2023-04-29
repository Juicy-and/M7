#pragma once
#include <exception>
#include <iostream>
class Bad_range : public std::exception
{
public:
    virtual const char* what() const noexcept override;
};

class Bad_length : public std::exception
{
public:
    virtual const char* what() const noexcept override;
};