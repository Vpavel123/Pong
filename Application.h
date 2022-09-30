#pragma once
#include <exception>
#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

class Application {
private:
    GLFWwindow* pWindow;
    static void initLibs();
    void gameLoop();
public:
    Application();
    void run();
};
