// Copyright COS 2020

/*
 * Explain what changes you need to do in your code to consider a blank symbol between any occurrence of cin and a following <<, 
 * and between  any  occurrence  of  cout  and  a following >>. You can write your explanation as a comment in the source file. 
 * read in the blacnk space and add another if statement
  */

#include<main.h>
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {
  // variables for input output
  ifstream fin;
  ofstream fout;
  string source, dest;
  int count = 0;

  cout << "Enter the filename: "
  cin >> source;
  // file to write
  // cout << "Enter filename to output: ";
  // cin >> dest;
  dest = "oFile.txt";
  // connect stream
  fin.open(source.c_str());
  // Check if the stream connection to the files was successful.
  // If not, an error message should be sent
  if (fin.fail()) {
    cout << "File not found";
    exit(1);
  }
  // connect file to output
  fout.open(dest.c_str());
  // correct the file
  correct(fin, fout, count);
  cout << "Number of corrections " << count << endl;
  // dont forget to close
  fin.close();
  fout.close();
  return 0;
}

void correct(ifstream& fin, ofstream& fout, int& count) {
  char nxt;
  // read through file
  fin.get(nxt);
  // loop till end of file
  while (!fin.eof()) {
    // count = 0;
    if (nxt == 'c') {
      fout << nxt;
      fin.get(nxt);
      if (nxt == 'i') {
        fout << nxt;
        fin.get(nxt);
        if (nxt == 'n') {
          fout << nxt;
          fin.get(nxt);
          while (nxt != ';') {
            if (nxt == '<') {
              fin.get(nxt);
              if (nxt == '<') {
                fout << ">>";
                count++;
              } else {
                  fout << nxt;
                }
              } else {
                  fout << nxt;
                }
              fin.get(nxt);
           }
         }
       }
       if (nxt == 'o') {
        fout << nxt;
        fin.get(nxt);
        if (nxt == 'u') {
          fout << nxt;
          fin.get(nxt);
          if (nxt == 't') {
            fout << nxt;
            fin.get(nxt);
            while (nxt != ';') {
              if (nxt == '<') {
                fin.get(nxt);
                if (nxt == '<') {
                  fout << ">>";
                  count++;
                } else {
                    fout << nxt;
                  }
                } else {
                    fout << nxt;
                  }
                fin.get(nxt);
              }
            }
          }
       }
     }
     fout << nxt;
     fin.get(nxt);
  }
}
