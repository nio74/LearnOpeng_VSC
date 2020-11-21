#ifndef CLASSSHADER_H
#define CLASSSHADER_H

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
class ClassShader
{
private:
    /* data */
public:
    // the program ID
    unsigned int ID;

    // constructor reads and builds the shader
    ClassShader(const char* vertexPath, const char* fragmentPath);
    // use/activate the shader
    void use();
    // utility uniform functions
    void setBool(const std::string& name, bool value) const;
    void setInt(const std::string& name, int value) const;
    void setFloat(const std::string& name, float value) const;
    void checkCompileErrors(unsigned int shader, std::string type);
    ~ClassShader();
};

#endif


