#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <sstream>
#include <ncurses.h>
#include "questions.h"

//default constructor
Mike::Mike()
{
    //load number from file
    //save number in variable
    //modify the variable until function quits
    //save the new variable to file
    readNumberFromFile("test.txt", questions);
    std::cout<<questions<<std::endl;
    tempQuestions = questions;
    breakOnKeyPress('q');
    std::cout<<"Addition to the existing number: "<< number <<std::endl;
    tempQuestions = tempQuestions + number;
    writeToFile("test.txt", tempQuestions);
    std::cout<<tempQuestions<<std::endl;
}

//destructor
Mike::~Mike(void)
{

};

//function used to increment numbers by keypress
bool Mike::breakOnKeyPress(char keyToBreak)
{
    initscr(); // initialize ncurses
    noecho(); //do not echo keypresses to the screen
    cbreak(); //disable line buffering, read keys instantly
    keypad(stdscr, TRUE); //enable special keys

    char keyPressed;
    while (true)
    {
        refresh();
        keyPressed = getch(); //get the key that was pressed
        if(keyPressed == keyToBreak)
        {
            endwin(); // clean up ncursed before exiting
            return true; //Break if the desired key is pressed
        }
        clrtoeol(); //clear the current line
        move(0,0); // move the cursor to the beginning of the line (0,0)
        number++;
        std::cout<<number<<std::endl;

    }
    return false;
}

//function opens .txt file and writes to file
void Mike::writeToFile(const std::string& filename, int input)
{
    std::cout<<"Writing data to file"<<std::endl;
    std::ofstream outFile(filename);

    if(!outFile.is_open())
    {
        std::cerr<<"Error opening the file for writing: "<< filename <<std::endl;
        return;
    }

    //write the content to the file
    outFile << input;

    std::cout<<"Content has been written to the file"<<std::endl;

    //close the file
    outFile.close();
}

//read and save to program
bool Mike::readNumberFromFile(const std::string& filename, int& questions)
{
    std::ifstream inFile(filename);
    
    //check if the file was successfully opened
    if(!inFile.is_open())
    {
        std::cerr << "Error opening file for reading: " << filename << std::endl;
        return false;
    }

    std::string line;

    if (std::getline(inFile, line)) {
        // Use stringstream to convert the line to an integer
        std::stringstream ss(line);
        if (ss >> questions) {
            // Successfully read and converted the number
            return true;
        } else {
            std::cerr << "Error reading number from file: " << filename << std::endl;
            return false;
        }
    } else {
        std::cerr << "File is empty: " << filename << std::endl;
        return false;
    }

    std::cout<<line<<std::endl;
    line = questions;
    return questions;

    inFile.close();
}