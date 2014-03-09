#ifndef BILLBOARD_H_
#define BILLBOARD_H_
#include <string>

class Space;

using namespace std;
class BillBoard {
	int value;
	string name;
	bool * reset;
public:
	BillBoard(int, string, bool&);
	virtual ~ BillBoard();
	int getValue();
	string getName();
	void setStatus( bool );
};

#endif /* BOARD_H_ */