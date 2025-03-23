#include "Exception.hpp"

Exception::Exception(std::string str_error) : std::domain_error(str_error)
{}