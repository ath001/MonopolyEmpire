/*
 * Tower.h
 *
 *  Created on: Mar 4, 2014
 *      Author: Anh
 */

#ifndef TOWER_H_
#define TOWER_H_

class Tower {
	int current_height;
public:
	Tower();
	virtual ~Tower();
	int TowerHeight[17];
	int getHeight();
	void setHeight( int change );
	int getValue();
};

#endif /* TOWER_H_ */
