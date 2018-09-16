/*
 * device.cpp
 *
 *  Created on: Sep 16, 2018
 *      Author: Hector Gastaminza
 */

#include "device.h"

namespace comiot{ namespace core { namespace device{

device::device() {
	// TODO Auto-generated constructor stub

}

device::~device() {
	// TODO Auto-generated destructor stub
}


int device::getPlaceID(){
	return placeID;
}
void device::setPlaceID(int newID){
	placeID = newID;
}

int device::getDeviceID(){
	return deviceID;
}
void device::setDeviceID(int newID){
	deviceID = newID;
}

int device::getValue(){
	return value;
}
void device::setValue(int newValue){
	value = newValue;
}

}}} /* namespace device */
