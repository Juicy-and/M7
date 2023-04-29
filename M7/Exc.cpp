#include "Exc.h"

const char* Bad_range::what() const noexcept
{
    return "ERROR: Bad_range!";
}

const char* Bad_length::what() const noexcept
{
    return "ERROR: Bad_length!";
}