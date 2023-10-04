#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	cout << endl;

	cout << i->getType() << " says: ";
	i->makeSound(); //will output the cat sound!
	cout << j->getType() << " says: ";
	j->makeSound();
	cout << meta->getType() << " says: ";
	meta->makeSound();

	cout << endl;

	delete meta;
	delete i;
	delete j;

	return 0;
}