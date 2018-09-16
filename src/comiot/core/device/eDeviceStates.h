/*
 * eDeviceStates.h
 *
 *  Created on: Sep 16, 2018
 *      Author: hector
 */

#ifndef COMIOT_CORE_DEVICE_EDEVICESTATES_H_
#define COMIOT_CORE_DEVICE_EDEVICESTATES_H_

namespace comiot{ namespace core { namespace device{

enum eDeviceStates {
	NONE = 0x00,
	OFF = 0x01,
	ON = 0x02,
	ON_VALUE = 0x03
};

}}} /* namespace device */

#endif /* COMIOT_CORE_DEVICE_EDEVICESTATES_H_ */
