/*
 * ProtocolSegment.h
 *
 *  Created on: Sep 16, 2018
 *      Author: Hector Gastaminza
 */

#ifndef COMIOT_CORE_DEVICE_PROTOCOL_PROTOCOLSEGMENT_H_
#define COMIOT_CORE_DEVICE_PROTOCOL_PROTOCOLSEGMENT_H_

#include <stdint.h>

namespace comiot{ namespace core { namespace device{ namespace protocol{

class ProtocolSegment {
private:
	__int16_t valueLenght;
	__int16_t segmentLenght;
	__int16_t posStart;
	__int16_t posEnd;
public:
	ProtocolSegment();
	virtual ~ProtocolSegment();
};

}}}} /* namespace protocol */

#endif /* COMIOT_CORE_DEVICE_PROTOCOL_PROTOCOLSEGMENT_H_ */
