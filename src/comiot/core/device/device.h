/*
 * device.h
 *
 *  Created on: Sep 16, 2018
 *      Author: Hector Gastaminza
 */

#ifndef COMIOT_CORE_DEVICE_DEVICE_H_
#define COMIOT_CORE_DEVICE_DEVICE_H_

#include "eDeviceStates.h"

namespace comiot{ namespace core { namespace device{

class device {
public:
	device();
	virtual ~device();

	const int & getPlaceID();
	void setPlaceID(const int & newID);
	const int & getDeviceID();
	void setDeviceID(const int & newID);
	const int & getValue();
	void setValue(const int & newValue);

	bool valueChange(const int & newValue);
	void stateChange(const eDeviceStates & newState);
	bool refreshState();

	bool reset();
	bool on();
	bool off();
	bool up();
	bool down();

private:
	int placeID;
	int deviceID;
	int value;
	eDeviceStates state;
	//IDeviceCommandsCallback deviceCommandsCallback = null;

protected:

};

}}} /* namespace device */

#endif /* COMIOT_CORE_DEVICE_DEVICE_H_ */
