// 09-StringStreams.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
using namespace std;


int main()
{
    //Create two strings.
    string nextWord;

    //Note how a long string can be broken over several lines to aid writing. Note the \ character never features in the string.
    string sentence = "May the force be with you. " \
                      "Always. Ok, maybe that's asking too much. " \
                      "How about 3 days-a-week with time off for birthdays?";

    //Write the complete string to the the terminal
    cout << sentence << endl;

    istringstream iss(sentence);

    int numofwords = 0;
    //Was a word actually read?
    do {
        
        iss >> nextWord;

        if (iss.fail()) {
            //If it failed, we're probably at the end of the stream
            cout << "No word successfully read. Is this the end of stream?" << endl;
        }
        else {
            //We have a valid word - so display it
            cout << nextWord << endl;
        }
        if (nextWord == "Always.") {
            cout << endl;
        }
        numofwords++;
  
    } while (!iss.eof());

    cout << "Total number of words: " << numofwords<< endl;
    //Final check - did we read an EOF character? This can happen when we read the last word or beyond it (space or newline)
    if (iss.eof()) {
        cout << "We reached the end of the file" << endl;
    }
    
    //Done
    return 0;

}

