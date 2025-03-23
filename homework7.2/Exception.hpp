#pragma once
#include <iostream>

class Exception : public std::domain_error
{
public:
	Exception(std::string);
};