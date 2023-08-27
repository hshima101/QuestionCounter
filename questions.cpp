#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <sstream>
#include "questions.h"

//default constructor
Mike::Mike()
{
    /*Working Functions*/
    //getdata();
    //setdata();
    //check();
    readNumberFromFile("test.txt", questions);
    std::cout<<questions<<std::endl;
    /*Test Functions*/
}

//destructor
Mike::~Mike(void)
{

};

void Mike::getdata()
{
    std::cout<<"Mike has told you to ask him questions "<<baseQuestions<<" times"<<std::endl;
    std::cout<<"press 1 if he has said it again"<<std::endl;
    std::cout<<"press 2 to quit program"<<std::endl;
    std::cin>>button;
    std::cout<<std::endl;

    readFile("test.txt");
    writeFile("test.txt");
    readFile("test.txt");
}

void Mike::setdata() const
{
    std::cout<<"Mike has told you to ask him questions "<<questions<<" times"<<std::endl;
}

bool Mike::binary(int input)
{
    if(input == 1)
    {
        std::cout<<"True"<<std::endl;
        return true;

    } else if(input == 2) {

        std::cout<<"False"<<std::endl;
        return false;
    }
    return 0;
}

bool Mike::check()
{
    if(this->button == 1)
    {
        std::cout<<"true"<<std::endl;
        this -> questions = this -> questions + 1;
        return true;
    } else {
        std::cout<<"false"<<std::endl;
        return false;
    }
}


//Read and write file functions
void Mike::writeFile(const std::string& filename)
{
    std::cout<<"Enter content you want to write to the file (type 'EOF' on a new line to finish): "<<std::endl;

    //read user input line by line until they type 'EOF'
    while(true)
    {
        std::string line;
        std::getline(std::cin, line);
        if(line == "EOF")
        {
            break;
        }

        content += line + "\n";
    }

    //create an ofstream object to write the file to
    std::ofstream outFile(filename);

    //check if it was successfully created
    if(!outFile.is_open())
    {
        std::cerr<<"Error opening the file for writing: "<< filename <<std::endl;
        return;
    }

    //write the content to the file
    outFile << content;

    std::cout<<"Content has been written to the file"<<std::endl;

    //close the file
    outFile.close();

}


std::string Mike::readFile(const std::string& filename)
{
    std::cout<<"readFile invoked"<<std::endl;
    std::ifstream inFile(filename);

    //check if the file was successfully opened
    if(!inFile.is_open())
    {
        std::cerr << "Error opening file for reading: " << filename << std::endl;
        return "";
    }

    std::string content;
    std::string line;

    //read the file by line and append it to the content string
    while (std::getline(inFile, line))
    {
        content += line + "\n";
    }
    
    //close the file
    inFile.close();

    std::cout<<"Content Read from file"<<std::endl;
    std::cout<<content<<std::endl;

    return content;
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