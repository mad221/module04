#include "Bureaucrat.hpp"

#define CATCH catch (std::exception& e) { std::cout << e.what() << std::endl ; }

int	main()
{
	Bureaucrat max = Bureaucrat("ji", 1);
	Bureaucrat min = Bureaucrat("ju", 150);
	std::cout << max << std::endl;
    std::cout << min << std::endl;
	try
	{
		Bureaucrat c = Bureaucrat("tsu", 0);
		std::cout << "okey" << std::endl;
	}
	CATCH;
	try { max.increase(); }
	CATCH;
	try { min.decrement(); }
	CATCH;
	try
	{
		max.increase();
		std::cout << max.getGrade() << std::endl;
	}
	CATCH;
	return (0);
}