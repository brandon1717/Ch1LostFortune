// Lost Fortune
// A personalized adventure

#include "stdafx.h"
#include<iostream>
#include<string>

int main()
{
	const int GOLD_PIECES = 900;
	int adventurers, killed, survivors;
	char leader;

	//get the information
	std::cout << "Welcome to Lost Fortune\n\n";
	std::cout << "Please enter the following for your personalized adventure\n";

	std::cout << "Enter a number:";
	std::cin >> adventurers;

	std::cout << "Enter a number, smaller than the first:";
	std::cin >> killed;

	survivors = adventurers - killed;

	std::cout << "Enter your last name:";
	std::cin >> leader;

	//tell the story

	std::cout << "\nA brave group of "<< adventurers << "set out on a quest";
	std::cout << "--in search of the lost treasure of the Ancient Dwarves.";
	std::cout << "The group was lead by that legendary roque," << leader << ".\n";
	std::cout << "\nAlong the weay, a band of maruading ogres ambused the party.";
	std::cout << "All fought bravely under the command of " << leader;
	std::cout << ",and the ogres were defeated, but at a cost.";
	std::cout << "Of the adventurers," << killed << "were vanquished,";
	std::cout << "leaving just" << survivors << "in the group,\n";

	std::cout << "\nThe party was about to give us all hope.";
	std::cout << "But while laying the deceased to rest, ";
	std::cout << "they stumbled upon the buried fortune.";
	std::cout << "So the adventurers split" << GOLD_PIECES << "gold pieces";
	std::cout << leader << "held on to the extra" << (GOLD_PIECES%survivors);
	std::cout << "pieces to keep things fair of course.\n";


    return 0;
}

