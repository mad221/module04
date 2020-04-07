#ifndef _SQUAD_
#define _SQUAD_
#include <iostream>
#include <string>
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"

typedef struct		s_unit
{
	ISpaceMarine	*unit;
	s_unit			*next;
}					t_unit;

class	Squad : public ISquad
{
	private:
		int		_nb;
		t_unit	*_unit;

	public:
		Squad();
		~Squad();
		Squad(const Squad &classe);
		int				getCount(void)	const;
		ISpaceMarine*	getUnit(int)	const;
		int				push(ISpaceMarine*);
};
#endif