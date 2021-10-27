#ifndef EXC
#define EXC
#include <string>


class NumberException { //volendo derivo da std::exception
    std::string m_msg {};
    
    public: 
        NumberException (std::string str) 
            : m_msg {str}
        {
        }
        std::string getError() {
            return m_msg; 
        }
};

#endif