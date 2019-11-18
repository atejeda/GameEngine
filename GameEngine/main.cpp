#include <iostream>

#define GLFW_DLL

#include <GL/glew.h>
#include <GLFW/glfw3.h>

using namespace std;

int main(int argc, const char * argv[]) {
    
    GLFWwindow* window;
    
    // initialise the library
    if (!glfwInit()) {
        return -1;
    }
    
    // create a windowed mode and its OpenGL context
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    
    if (!window) {
        glfwTerminate();
        return -1;
    }
    
    glfwMakeContextCurrent(window);
    
    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);
        
        // render opengl here
        
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    
    glfwTerminate();
    
    return 0;
}
