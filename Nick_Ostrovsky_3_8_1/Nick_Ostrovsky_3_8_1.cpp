
#include <iostream>
#include <string>

int function_line(std::string, int forbidden);

int main()
{
    std::string termination = " ";
    int l = 0;
    std::string input;
    std::cout << "\n\t Enter forbidden length: " << std::endl;
    std::cin >> l;
   // while (termination != "Forbidden length")
    while(1)
    {
        std::cout << "\n\tPlease Enter your line: " << std::endl;
        std::cin >> input;
        try
        {
            function_line(input, l);

        }
        catch (std::string bad_length)
        {
            std::cout << bad_length << std::endl;
          //  termination = "Forbidden length";
            return -1;
        }

    }
    return 0;
}

int function_line(std::string line, int forbidden)
{
    int len = line.length();
    if (len == forbidden)
    {
        throw std::string{"Forbidden length"};


    }
    else return len;
}