//
// Created by UserPro on 30.09.2022.
//

#include "Application.h"

Application::Application() {
    initLibs();

    pWindow = glfwCreateWindow(1280, 720, "Pong", NULL, NULL);
    glfwMakeContextCurrent(pWindow);
}

void Application::initLibs() {
    if (!glfwInit())
    {
        throw std::runtime_error("glfw not inited!");
    }

    if (!glewInit())
    {
        throw std::runtime_error("glew not inited!");
    }
}

void Application::gameLoop() {

}

void Application::run() {
    while (!glfwWindowShouldClose(pWindow))
    {
        glfwPollEvents();
        try {
            gameLoop();
        }
        catch (std::exception& ex) {
            std::cout << "Update Loop Error: " << ex.what() << std::endl;
        }
        glfwSwapBuffers(pWindow);
    }

    glfwTerminate();
}