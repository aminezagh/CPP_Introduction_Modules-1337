#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;

	public :
		Cat();
		Cat(Cat &obj);
		~Cat();
		std::string	getType();
		void	makeSound();

		Cat &operator=(Cat &obj);
};

#endif