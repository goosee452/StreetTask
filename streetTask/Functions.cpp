#include "Header.h"


int houseB_opposite(int houseA, int houseB){
	int opposite = houseB;

	if(houseA % 2 != houseB % 2){
		if(houseA % 2 == 0){
			opposite = houseB + 1;
		}
		else{
			opposite = houseB - 1;
		}
	}

	return opposite;
}

int homePosDiff(int houseA_pos, int houseB_pos){   //difference between positions of houses A & B
	int difference = houseA_pos - houseB_pos;
	difference = difference > 0? difference : -difference;
	return difference;
}




