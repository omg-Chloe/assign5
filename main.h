// Copyright COS 2020
#ifndef _MAIN_H_INCLUDED  //NOLINT
#define _MAIN_H_INCLUDED  //NOLINT

/* Your program should consist of a header that contains the following information:
○ First name and last name of the programmer.
  Chloe Odessa Shirk
○ Date and time of the program completion.
  11.12.2020 2359
○ A brief description of the program function.
  Program intakes a text file that has inccorect cin<< and cout>> it then replaces each with the correct cin>> and cout<< saving it to a file called oFile.txt
  ○ Input requirements and format.
  input reuirements is the text file
  ○ The output of the program.
  the output is the corrected text file
  ○ Any additional needed comments (e.g. related to compilation, execution, or other requirements).
  Explainwhat changes you need to do in your code to consider a blank symbol between any  occurrence  of  cin  and  a  following  <<,  and  between  any  occurrence  of  cout  and  a following >>. You can write your explanation as a comment in the source file. Below is an example for one blank symbol. 
   */

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

// Define a function that is called with the input-and output-file streams as arguments
void correct(ifstream& in, ofstream& out, int& count);

#endif  //NOLINT
