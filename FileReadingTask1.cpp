#include <fstream>
#include <iostream>

int main()
{
    std::ifstream book;
    book.open("C:\\Users\\Василий\\source\\repos\\FileReadingTask1\\words.txt");
    std::string temp;
    std::string searchOne;
    std::cout << "Entert the word to search: ";
    std::cin >> searchOne;
    int counter = 0;
    do
    {
        book >> temp;
        if (temp == searchOne)
        {
            counter++;
        }
        //std::cout << temp << std::endl;
    } while (temp != "End");
    book.close();
    std::cout << "We found " << counter << " matches!" << std::endl;
}

