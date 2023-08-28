#ifndef _QUESTIONS_H_
#define _QUESTIONS_H_
#include <iostream>
#include <fstream>
#include <cctype>
#include <cstring>
#include <sstream>
#include <string>
#include <ncurses.h>

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

        //test logic loops
        bool breakOnKeyPress(char keyToBreak);

        //bool check(int input);

        void writeFile(const std::string& filename);

        void writeToFile(const std::string& filename, int input);

        std::string readFile(const std::string& filename);

        bool readNumberFromFile(const std::string& filename, int& number);

    private:
        std::string content;
        int number = 0;
        int questions = 0;
        int tempQuestions = 0;
        int baseQuestions = 288;
        int button;
};


#endif
