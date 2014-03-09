/*
 * Tower.h
 *
 *  Created on: Mar 4, 2014
 *      Author: Anh
 */

#ifndef TOWER_H_
#define TOWER_H_
#include <stack>
#include "BillBoard.h"
class Tower {
	int current_height;
public:
	Tower();
	virtual ~Tower();
	int TowerHeight[17];
	int getHeight();
	void setHeight( int change );
	int getValue();
	void setBillBoard( BillBoard * bboard);
	BillBoard* getTopBillBoard();
	// stack<BillBoard> getBillBoard();

	stack<BillBoard*> Top_BillBoard;

};

#endif /* TOWER_H_ */
