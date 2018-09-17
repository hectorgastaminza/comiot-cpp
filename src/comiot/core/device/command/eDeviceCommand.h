/*
 * eDeviceCommand.h
 *
 *  Created on: Sep 16, 2018
 *      Author: Hector Gastaminza
 */

#ifndef COMIOT_CORE_DEVICE_COMMAND_EDEVICECOMMAND_H_
#define COMIOT_CORE_DEVICE_COMMAND_EDEVICECOMMAND_H_

namespace comiot{ namespace core { namespace device{ namespace command{

enum eDeviceCommand {
    NONE = 0x00,
    GET_STATUS = 0x01,
    SET_VALUE = 0x02,
    OFF = 0x03,
    ON = 0x04,
	UP = 0x05,
	DOWN = 0x06,
	RESET = 0xFF
};

}}}} /* namespace command */

#endif /* COMIOT_CORE_DEVICE_COMMAND_EDEVICECOMMAND_H_ */
