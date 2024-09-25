#ifndef EAASYFIND_HPP
#define EAASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
#include <exception>

class ElementNotFoundException : public std::exception
{
public:
    const char* what() const throw() {
        return "Element not found in the container";
    }
};

#endif