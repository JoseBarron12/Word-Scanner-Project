# Word Scanner

**Data Structure:** Map, String <BR>
**Programming Focus:** STL Map, pair, Lambda expressions, IO manipulation

## Overview

Welcome to the Word Scanner program! This C++ application is designed to process a stream of words, removing punctuation and converting all words to lowercase. The result is a map that counts the frequency of each unique, cleaned word in the input stream.

## Features

- **Word Cleaning:**
  - Removes punctuation from words.
  - Converts all words to lowercase.

- **Word Frequency Count:**
  - Creates a map with cleaned words as keys and their frequency in the input stream as values.

## Test Runs

The program has undergone extensive testing to ensure its correct functionality. Various test cases cover different scenarios, including sentences with punctuation, different word frequencies, and various word lengths.

1. Basic Word Cleaning
   - Tests the removal of punctuation from words.
   - Ensures all words are converted to lowercase.

2. Word Frequency Count
   - Checks the accuracy of word frequency counting.
   - Verifies that the map contains the correct count for each unique word.

3. Comprehensive Input
   - Processes a longer and more complex input stream.
   - Validates the overall performance and accuracy of the Word Scanner.

## Code Organization

All the code for this project is located in the accompanying file named `wordscanner.cc`. The document is structured to be read from top to bottom, providing a detailed explanation of the code, its functions, and the rationale behind design decisions.

The code primarily consists of two functions:

- `clean_entry`: Removes punctuation and converts a word to lowercase.
- `get_words`: Processes the input stream, cleans words, and populates the frequency map.

## Skills Showcase

This project demonstrates proficiency in several key areas:

- **C++ Programming:**
  - Utilizes C++ features, including standard library functions and algorithms.
  - Implements map data structures for word frequency counting.

- **String Manipulation:**
  - Demonstrates effective string manipulation techniques, including finding and transforming characters.

- **Data Structures:**
  - Utilizes the `std::map` data structure for efficient word frequency counting.

- **Testing:**
  - Underwent thorough testing with various test cases to ensure robustness and correctness.
  - Validates the reliability of the program under different input conditions.

These skills collectively showcase the ability to design, implement, and document a C++ program that effectively processes and analyzes a stream of words.
