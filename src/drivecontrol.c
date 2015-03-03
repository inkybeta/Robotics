/*
 * drivecontrol.c
 *
 *  Created on: Feb 5, 2015
 *      Author: Justin
 */
#include "main.h"

void MoveForward(int speed){
	motorSet(FRONT_RIGHT, speed);
	motorSet(FRONT_LEFT, speed);
	motorSet(BACK_LEFT, speed);
	motorSet(BACK_RIGHT, speed);
}

void MoveBackward(int speed){
	motorSet(FRONT_RIGHT, -speed);
	motorSet(FRONT_LEFT, -speed);
	motorSet(BACK_LEFT, -speed);
	motorSet(BACK_RIGHT, -speed);
}
void MoveLeft(int speed){
	motorSet(FRONT_RIGHT, speed);
	motorSet(FRONT_LEFT, -speed);
	motorSet(BACK_LEFT, -speed);
	motorSet(BACK_RIGHT, speed);
}
void MoveRight(int speed){
	motorSet(FRONT_RIGHT, -speed);
	motorSet(FRONT_LEFT, speed);
	motorSet(BACK_LEFT, speed);
	motorSet(BACK_RIGHT,-speed);
}
void StopMovement(){
	motorSet(FRONT_RIGHT, 0);
	motorSet(FRONT_LEFT, 0);
	motorSet(BACK_LEFT, 0);
	motorSet(BACK_RIGHT, 0);
}
void RotateLeft(int speed){
}
void RotateRight(int speed){
}
