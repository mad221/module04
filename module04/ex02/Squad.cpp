#include "Squad.hpp"

Squad::Squad()
{
    this->_nb = 0;
    this->_unit = NULL;
}

Squad::Squad(const Squad &classe)
{
    int i = 0;
    while(i < classe.getCount())
    {
        push(classe.getUnit(i));
        i++;
    }
}

Squad::~Squad()
{
    t_unit *tmp;

    while(_unit)
    {
        tmp = _unit;
        _unit = _unit->next;
        delete tmp->unit;
        delete tmp;
    }
}

int Squad::getCount() const
{
    return (this->_nb);
}


int Squad::push(ISpaceMarine *marine)
{
    t_unit *unity;

    if (!marine)
        return (0);
    unity = _unit;
    if (unity != NULL)
    {
        while (unity->next != NULL)
            unity = unity->next;
        unity->next = new t_unit;
        unity->next->unit = marine;
        unity->next->next = NULL;
    }
    else
    {
        this->_unit = new t_unit[1];
        this->_unit->unit = marine;
        this->_unit->next = NULL;
    }
    this->_nb += 1;
    return (1);

}

ISpaceMarine *Squad::getUnit(int n) const
{
    t_unit *unity;

    unity = _unit;
    int i = 0;
    while (i < n)
    {
        if (unity == NULL)
            return (NULL);
        unity = unity->next;
        i++;
    }
    return (unity->unit);
}