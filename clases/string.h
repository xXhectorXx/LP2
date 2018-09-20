#ifndef MY_STRING_H
#define MY_STRING_H
#include <string>

class mystring
{
    private:
    
        char*str;
        int m_size;

    public:
        mystring(const char* s=0);
        mystring(const std::string &s);
        ~mystring();
        int size(); //or lenght
        char&operator[](int i);
        friend std::ostream & operator<<(std::ostream &os,const mystring & s);
};
#endif//MY_STRING_H