#include <iostream>
#include <string>
#include <fstream>
#include <vector>


int main(int ac, char **av)
{
    if (ac == 4)
    {
        std::string filename = av[1];
        filename += ".replace";
        std::ifstream output(filename);

        if (!output)
            return (0);
        std::string line;
        std::string text;
        std::string tosearch = av[2];
        std::string replace = av[3];
        size_t pos;
        std::string stock;
        while (std::getline(output,line))
        {
            stock += line;
            stock += '\n';
        }
        line = stock;
        while (1)
        {
            
            pos = line.find(av[2]);
            while (pos != std::string::npos)
            {
                line.replace(pos, tosearch.size(), replace);
                pos = line.find(av[2]);
            }
            std::ofstream input(filename);
            line.pop_back();
            input << line;
                    return (0);
        }
    }
    else
        std::cout << "wrong argument" << std::endl;
}