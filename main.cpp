#define GLEW_STATIC

#include <iostream>
#include <string>
#include "Application.h"

int main() {
    try
    {
        Application app;
        app.run();
    }
    catch (std::exception& ex) {
        std::cout << "Application Creation Error: " << ex.what() << std::endl;
        return -1;
    }

    return 0;
}
