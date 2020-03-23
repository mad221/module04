#ifndef _TACTICALMARINE_
#define _TACTICALMARINE_
#include <iostream>
#include <string>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
    private:

    public:
        TacticalMarine();
        virtual ~TacticalMarine(void);
        TacticalMarine(const TacticalMarine &cpy);
        void battleCry(void) const;
        ISpaceMarine*	clone(void)			const;
        void			rangedAttack(void)	const;
	    void			meleeAttack(void)	const;

};
#endif