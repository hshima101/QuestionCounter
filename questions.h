#ifndef _QUESTIONS_H_
#define _QUESTIONS_H_
#include <iostream>
#include <fstream>
#include <cctype>
#include <cstring>
#include <sstream>
#include <string>

class Mike
{
    public:
        Mike();
        ~Mike(void);
        void getdata();
        void setdata() const;
        bool binary(int input);

        //test functions
        bool check();
        //bool check(int input);

        void writeFile(const std::string& filename);

        std::string readFile(const std::string& filename);

        bool readNumberFromFile(const std::string& filename, int& number);

    private:
        std::string content;
        int questions = 0;
        int baseQuestions = 288;
        int button;
};


#endif
