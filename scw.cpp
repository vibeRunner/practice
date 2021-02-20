// by viberunner
// https://szkopul.edu.pl/c/kodowanie-z-kocurrem/p/scw/

#include <iostream>
using namespace std;

int main(){

	int floor_x;
	int floor_y;
	int floor_elevator;

	int time_stairs;
	int time_elevator;
	int time_door;

	// da sie to jakos lepiej zrobic?
	cin >> floor_x; 
	cin >> floor_y;
	cin >> floor_elevator;
	cin >> time_stairs; 
	cin >> time_elevator; 
	cin >> time_door;


	int total_elevator = (3 * time_door) + (abs(floor_x - floor_elevator) * time_elevator) + (abs(floor_x - floor_y) * time_elevator);

	int total_stairs = time_stairs * abs(floor_x - floor_y);

	if (total_elevator < total_stairs)
		cout << "Tak";

	else if (total_stairs < total_elevator)
		cout << "Nie";


	return 0;
}