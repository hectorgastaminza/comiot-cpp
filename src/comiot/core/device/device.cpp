/*
 * device.cpp
 *
 *  Created on: Sep 16, 2018
 *      Author: Hector Gastaminza
 */

#include "device.h"

namespace comiot{ namespace core { namespace device{

device::device() {
	placeID = 0;
	deviceID = 0;
	value = 0;
	state = NONE;
}

device::~device() {
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

bool device::valueChange(int newValue) {
	value = newValue;
	stateChange(ON_VALUE);
	return true;
}

void device::stateChange(eDeviceStates newState) {
	state = newState;

	/*
	if(debugMessages) {
		System.out.println("Device: " + id +
				" | Place: " + placeID +
				" | new state: " + state
				);
	}
	*/

	refreshState();
}

bool device::refreshState() {
	return false; //(deviceCommandsCallback != null) ? deviceCommandsCallback.commandRefreshState(placeID, id, state, value) : false;
}




bool device::reset() {
	stateChange(NONE);
	return true;
}

bool device::on() {
	stateChange(ON);
	return true;
}

bool device::off() {
	stateChange(OFF);
	return true;
}

bool device::up() {
	stateChange(ON_VALUE);
	return true;
}

bool device::down() {
	stateChange(ON_VALUE);
	return true;
}


}}} /* namespace device */
