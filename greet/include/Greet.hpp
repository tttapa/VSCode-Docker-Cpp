#pragma once

#include <iostream>  // std::ostream, std::cout
#include <string>    // std::string

/**
 * @brief   A function that prints a greeting to the given output stream.
 * 
 * @param   name
 *          The name of the person to greet. 
 * @param   os 
 *          The output stream to print the greeting to.
 */
void greet(std::string name, std::ostream &os = std::cout);