#include <GLFW/glfw3.h>
#include "vector2.hpp"
#include "Time.hpp"
#include <unistd.h>

int doMain()
{
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Hello World", nullptr, nullptr);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    Time::init();
    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);
        //render nothing.....

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();

        //end the frame
        Time::endFrame();
        std::cout << 1.0/Time::dT() << std::endl;
    }

    glfwTerminate();
    return 0;
}

int main()
{
    return doMain();
}