//***************************************************************************
//
// Jose Barron
// Z02013735
// Fall 2023 CSCI 340 - PE1 Data Struct Algorithm Analysis
// Assignment 06: This program is intended to scan a stream of words and 
// remove any punctuation and capitilzation from all words in the input
// stream.
// Due Date: 10/16/23
// I certify that this is my own work and where appropriate an extension
// of the starter code provided for the assignment.
//
//***************************************************************************

#include<iostream>
#include<string>
#include<map>
#include<algorithm>
#include<iomanip>

// clean_entry parameters are og_w which is the original word attained from
// the input stream and new_w is the new word after cleaning. The usage of 
// find_if function from the algorithm library is used to find pointers to 
// the first character and last character of the word and are used to
// create a string from the two pointers only if both return valid pointers
// if not then that means the word is already cleaned (word with no
// punctuation). Whether the word is cleaned or not, the transfrom
// function is used to make the word all lowercase.

void clean_entry(const std::string& og_w, std::string& new_w)
{
    auto pos1 = std::find_if(og_w.begin(),og_w.end(), [](unsigned char c) { return isalnum(c); });
    auto pos2 = std::find_if(og_w.begin(),og_w.end(),[](unsigned char c) { return ! isalnum(c); });
    if ( pos1 != og_w.end() && pos2 != og_w.end())
    {
        std::string clean(pos1,pos2);
        new_w = clean;
    }
    else
    {
        new_w = og_w;   
    }
    std::transform(new_w.begin(), new_w.end(),new_w.begin(), [](unsigned char c) {  return tolower(c);});
}

// get_word gets all the words from the input stream and adds them to a 
// given map m, only if clean_entry returns an actual word. Then after
// the clean word is inputted, it is cleared inorder to make the second
// parameter of clean_entry empty.

void get_words(std::map<std::string, int>& m)
{
    std::string dirty_w;
    std::string clean_w;
    while (std::cin >> dirty_w)
    {
        clean_entry(dirty_w,clean_w);
        if (clean_w.length() != 0)
        {
            std::for_each(clean_w.begin(), clean_w.end(), [](unsigned char c) { return tolower(c); });
            m[clean_w]++;
        }
        clean_w.clear();
    }
}

// print_words prints a given map with the format outlined in the 
// assigment. 
void print_words(const std::map<std::string, int>& m)
{
    int NO_ITEMS = 4, ITEM_WORD_WIDTH = 14, ITEM_COUNT_WIDTH = 3;
    int count = 0;
    for(auto it = m.begin(); it != m.end(); it++)
    {
        std::cout << std::left << std::setw(ITEM_WORD_WIDTH) << it->first << ":";
        std::cout << std::left << std::setw(ITEM_COUNT_WIDTH)<< it->second;
        ++count; // count used to keep track of number of words on each line.
        
        // once the desired number of words on one line is reached (when 
        // NO_ITEMS is reached) then a newline is created to make another row.
        if(count == NO_ITEMS )                
        {
            std::cout << std::endl;
            count = 0;
        }        
    }
    int input = 0;
    // For loop adds up all the number of frequencies of each words to 
    // find out number of words in input stream.
    for(auto it = m.begin(); it != m.end(); it++)
    {
        input += it->second;
    }
    std::cout << "\nnumber of words in input stream   :" << input;
    std::cout << "\nnumber of words in output stream  :" << m.size();
}

int main()
{
    std::map<std::string, int> map;
    get_words(map);
    print_words(map);
}
