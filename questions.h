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

        bool breakOnKeyPress(char keyToBreak);

        void writeToFile(const std::string& filename, int input);

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
