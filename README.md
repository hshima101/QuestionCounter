#Question Counting Program Prototype

## Description
A little side project I decided to work on for myself and for the rest of the students in Cohort 6. I decided to set out on making 
a program that would keep track of the number fo times Mike would ask students to ask him questions during his classes. At first this 
started as a joke, but as I continued working on the program I began to realize that this program could be help introduce many of you
to programming concepts that could help you out on your future assignemnts. As of writing this I am sure your programming assignments aren't
too hard, but while they are easy, why don't I give you guys a head start before things get really hard? 
Anyhow, this program is for everyone who is in Cohort 6. I will release a python version for you all when it is ready

## Table of Contents
- [Installation](#installation)
- [Usage](#usage)

## Installation
If you want to run this program, there are a few packages you need to install on your computer before you can run C++

For Windows Systems
1. In your VS Code, install the C++ extension package for VS Code by searching for the C++ within VS Code

2. After this you need to install a compiler for C++. For this tutorial you will install a compiler called MinGW
- Open up the command prompt from the search bar and enter:
- wget https://github.com/msys2/msys2-installer/releases/download/2021-07-25/msys2-x86_64-2021-07-25.exe -O msys2-installer.exe
- This will download the compiler to your computer

3. Run the Installer. MinGW has been downloaded, but it is not installed yet. We will run the installer from the command prompt
by typing in the command:
- msys2-installer.exe
- read the instructions and accept the default settings for now.

4. Update MSYS2. After the installer has been downloaded, update with the command:
- pacman -Syu
- this will update the package manager on your system

5. Install MinGW-w64. Use the following command
- pacman -S mingw-w64-x86_64-toolchain
- the compiler tool chain will have been intalled

6. Add MinGW to your system Path:
- After you are done installing everything, we need to make everything installed visible for VS Code to recognize the compiler
- In the command prompt, type in:
- echo 'export PATH=/mingw64/bin:$PATH' >> ~/.bashrc

7. close and reopen the command prompt

8. Verify Installation
- To check if you installed MinGW correctly, enter the following command:
- g++ version
- the command prompt should give you information on the MinGW version you have installed on your system

For MacOS
-Eh, its 2am. I'll add instructions at a later time. I need to sleep.

##Usage
There is alread a program built into the files named exe
to run the program you can open up a new window in VS Code and open the project file
In your VS Code terminal, type in the following command:
./exe

The program will keep counting numbers when you press any kew on your keyboard
'q' will close the program
You can check the number of times you were told to ask questions in the .txt file in the project folder. 
Before you start using the program, set an estimated number of questions from Mike before startng the program

At the end of the semester, you can DM me your numbers so I can calculate an average for Mike
   
