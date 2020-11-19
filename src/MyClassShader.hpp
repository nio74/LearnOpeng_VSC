//
//  MyClassShader.hpp
//  LearnOpenglXcode1
//
//  Created by Paolo Mazzon on 17/11/20.
//

#ifndef MyClassShader_hpp
#define MyClassShader_hpp

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class MyClassShader
{
public:

    // the program ID
    unsigned int ID;

    // constructor reads and builds the shader
    MyClassShader(const char* vertexPath, const char* fragmentPath);
    // use/activate the shader
    void use();
    // utility uniform functions
    void setBool(const std::string& name, bool value) const;
    void setInt(const std::string& name, int value) const;
    void setFloat(const std::string& name, float value) const;
    void checkCompileErrors(unsigned int shader, std::string type);
};

#endif /* MyClassShader_hpp */
