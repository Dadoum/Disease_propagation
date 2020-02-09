#ifndef PERSON_H
#define PERSON_H
#include <SFML/Graphics.hpp>

#define HEALTHY_COLOR		sf::Color(10, 255, 50)	// Couleur des gens en bonne sant�
#define VACCINATED_COLOR	sf::Color(10, 50, 255)	// Couleur des gens vaccin�s
#define SICK_COLOR			sf::Color(255, 50, 50)	// Couleur des gens malades
#define DEAD_COLOR			sf::Color(0, 0, 0)		// Couleur des gens morts



// Enum d�finissant l'�tat de sant� d'une personne

enum Health { vaccinated, healthy, sick, dead };



// Classe d�finissant une personne

class Person
{

public:

	Health	health;			// Etat de sant�
	bool	resistant;		// R�sistant � la maladie (ne meurt pas)
	bool	new_sick;		// Malade depuis une seule it�ration
	int		nb_sick_days;	// Nombre de jours depuis la contamination

	Person();
	Person(const Person& person);
	Person(const double& vaccinated_percentage, const double& death_rate);

	void operator=(const Person& person);
};

bool rand_probability(const double& probability);

#endif