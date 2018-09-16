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

	int getPlaceID();
	void setPlaceID(int newID);
	int getDeviceID();
	void setDeviceID(int newID);
	int getValue();
	void setValue(int newValue);

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
