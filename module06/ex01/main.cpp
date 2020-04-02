#include <string>
#include <iostream>
#include <ctime>


struct Data
{
    int n;
    std::string s1;
    std::string s2;
};

void *serialize(void)
{
    char array[37] = "0123456789qwertyuiopasdfghjklzxcvbnm";
    int i = 0;
    Data *ret;
    ret = new Data;
    while ( i < 8)
    {
        ret->s1 += array[rand() % 37];
        ret->s2 += array[rand() % 37];
        i++;
    }
    ret->n = rand() % 30 + 1000;
    return (ret);
}

Data *deserialize(void *array)
{
    return (reinterpret_cast<Data*>(array));
}


int main()
{
   Data *data;

    data = deserialize(serialize());
    std::cout << data->s1 << std::endl << data->s2 << std::endl << data->n << std::endl;
    data = deserialize(serialize());
    std::cout << data->s1 << std::endl << data->s2 << std::endl << data->n << std::endl;
    data = deserialize(serialize());
    std::cout << data->s1 << std::endl << data->s2 << std::endl << data->n << std::endl;
    delete (data);

}