﻿#include <fstream>
#include <iostream>

int main()
{
    std::ifstream book;
    book.open("words.txt");
    std::string temp;
    std::string searchOne;
    std::cout << "Entert the word to search: ";
    std::cin >> searchOne;
    int counter = 0;
    while (!book.eof())
    {
        book >> temp;
        if (temp == searchOne)
        {
            counter++;
        }
        //std::cout << temp << std::endl;
    }
    book.close();
    std::cout << "We found " << counter << " matches!" << std::endl;
}

