/*
 * DeviceCommandDispatcher.h
 *
 *  Created on: Sep 16, 2018
 *      Author: Hector Gastaminza
 */

#ifndef COMIOT_CORE_DEVICE_COMMAND_DEVICECOMMANDDISPATCHER_H_
#define COMIOT_CORE_DEVICE_COMMAND_DEVICECOMMANDDISPATCHER_H_

namespace comiot{ namespace core { namespace device{ namespace command{

class DeviceCommandDispatcher {
public:
	DeviceCommandDispatcher();
	virtual ~DeviceCommandDispatcher();
};

}}}} /* namespace command */

#endif /* COMIOT_CORE_DEVICE_COMMAND_DEVICECOMMANDDISPATCHER_H_ */
