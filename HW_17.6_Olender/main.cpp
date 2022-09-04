/*/////////////////////////////////////////////////////////////////////////////////////////////
 CLASS: CS 3060
 NAME: PJ OLENDER
 DATE: 09/03/2022
 ASSIGNMENT #: 17.6

 Word Frequency:
    Write a program that reads the contents of a text file. The program should create a
    map in which the keys are the individual words found in the file and the values are
    the number of times each word appears. For example, if the word "the" appears 128 times,
    the map would contain an element with "the" as the key and 128 as the value.

    The program should either display the frequency of each word or create a second file
    containing a list of each word and its frequency.

 /////////////////////////////////////////////////////////////////////////////////////////////*/

#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

int main() {

    string inputFileName;
    string input;

   // InputFile Object
    ifstream file;

    // map to hold the words and their frequencies
    map<string, int> words;

    // Prompt the user to input a file name
    cout << "Enter an input file name:  (The one provided with this assignment is 'ExampleInput.txt)'" << endl;
    getline(cin, inputFileName);

    // open the file object for reading
    file.open(inputFileName);

    // Read through all the lines in the input file and process them accordingly
    while (file >> input) {
        // If the word pre-exists in the map structure
        if (words.count(input)) {
            words[input]++;

        // Add to the word to the map and set its initial count to 1
        } else {
            words.emplace(make_pair(input, 1));
        }
    }

    // Close the file object
    file.close();

    // Output the word frequency
    cout << "\nWord Frequency: ";
    cout << "\n-----------------" << endl;

    // Iterate over the map and display all the contents
    for (auto i : words) {
        cout << i.first << ": " << i.second << endl;
    }

    return 0;
}