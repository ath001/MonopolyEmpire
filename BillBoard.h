#ifndef BILLBOARD_H_
#define BILLBOARD_H_

using namespace std;
class BillBoard {
	int value;
	int brand;
public:
	BillBoard(int, int);
	virtual ~ BillBoard();
	int getValue();
	int getBrand();
};

#endif /* BOARD_H_ */