objects = main.o menu.o validate.o Game.o Vampire.o Creature.o Barbarian.o BlueMen.o Medusa.o HarryPotter.o

all: combatGame

combatGame: $(objects)
	g++  $(objects) -o combatGame

main.o: main.cpp
	g++ -c main.cpp

menu.o: menu.cpp
	g++ -c menu.cpp

validate.o: validate.cpp
	g++ -c validate.cpp

Game.o: Game.cpp
	g++ -c Game.cpp

Creature.o: Creature.cpp
	g++ -c Creature.cpp

Vampire.o: Vampire.cpp
	g++ -c Vampire.cpp

Barbarian.o: Barbarian.cpp
	g++ -c Barbarian.cpp

BlueMen.o: BlueMen.cpp
	g++ -c BlueMen.cpp

Medusa.o: Medusa.cpp
	g++ -c Medusa.cpp

HarryPotter.o: HarryPotter.cpp
	g++ -c HarryPotter.cpp

clean:
	rm *.o
