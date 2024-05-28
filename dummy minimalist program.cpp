#include <iostream>
#include <string>
#include <iomanip>
#include <Windows.h>

#define ARR_CHAR_SIZE 128

int main()
{
    int varInt = 123456;
    std::string varString = "DefaultString";
    char arrChar[ARR_CHAR_SIZE] = "Long char array right there ->";

    int* ptr2int = &varInt;
    int** ptr2ptr = &ptr2int;
    int*** ptr2ptr2 = &ptr2ptr;

    while (true) {
        // variables
        std::cout << "Process ID: " << GetCurrentProcessId() << std::endl;
        std::cout << std::endl;
        std::cout << std::setw(13) << std::left << std::hex << std::uppercase << "varInt" 
            << "(0x" << (uintptr_t)&varInt << ")" << " = " << std::dec << varInt << std::hex << std::endl;
        std::cout << std::setw(13) << std::left << "varString" 
            << "(0x" << (uintptr_t)&varString << ")" << " = " << varString << std::endl;
        std::cout << std::setw(13) << std::left << "arrChar" 
            << "(0x" << (uintptr_t)&arrChar << ")" << " = " << arrChar << std::endl;
        std::cout << std::endl;

        // pointers
        std::cout << std::setw(13) << std::left << "ptr2int" 
            << "(0x" << (uintptr_t)&ptr2int << ")" << " = 0x" << ptr2int << std::endl;
        std::cout << std::setw(13) << std::left << "ptr2ptr" 
            << "(0x" << (uintptr_t)&ptr2ptr << ")" << " = 0x" << ptr2ptr << std::endl;
        std::cout << std::setw(13) << std::left << "ptr2ptr2" 
            << "(0x" << (uintptr_t)&ptr2ptr2 << ")" << " = 0x" << ptr2ptr2 << std::endl;
        std::cout << std::endl;

        // enter
        std::cout << "Press ENTER to print again." << std::endl;
        std::cout << std::endl;
        std::cout << std::setfill('-') << std::setw(70) << std::left << "-" << std::endl;
        std::cout << std::setfill(' ') << std::dec << std::endl;

        system("pause > nul"); // pause loop
    }
    return 0;
}

