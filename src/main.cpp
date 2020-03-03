#include <GLFW/glfw3.h>
#include "vector2.hpp"
#include "Time.hpp"

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

    //TRIANGLE DEFINITION
    //
    float positions[6]{
            -0.5f, -0.5f,
             0.0f,  0.5f,
             0.5f, -0.5f
    };
    unsigned int buffer;  //VRAM memery partition id
    glGenBuffers(1,&buffer);  //make new vertex array and pass its id into buffer ID
    glBindBuffer(GL_ARRAY_BUFFER,buffer);  //select the new buffer and set its type to a array buffer.
    glBufferData(GL_ARRAY_BUFFER,6* sizeof(float),positions,GL_STATIC_DRAW);

    // Todo: vertex attributes lesson https://www.youtube.com/watch?v=x0H--CL2tUI&list=PLlrATfBNZ98foTJPJ_Ev03o2oq3-GGOS2&index=5

    Time::init();
    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        glDrawArrays(GL_TRIANGLES,0,3); // draw selected triangle. (bind another buffer if you want to draw that.

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