#ifndef CONSOLEAPPLICATION1_FUNCTIONS_H
#define CONSOLEAPPLICATION1_FUNCTIONS_H

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

#include <GL/glew.h>
#include <GLFW/glfw3.h>


GLuint LoadShaders(const char * vertex_file_path, const char * fragment_file_path);
GLuint loadDDS(const char * imagepath);

#endif //CONSOLEAPPLICATION1_FUNCTIONS_H
