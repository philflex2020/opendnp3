/**
 * Licensed to Green Energy Corp (www.greenenergycorp.com) under one or
 * more contributor license agreements. See the NOTICE file distributed
 * with this work for additional information regarding copyright ownership.
 * Green Energy Corp licenses this file to you under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except in
 * compliance with the License.  You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * This project was forked on 01/01/2013 by Automatak, LLC and modifications
 * may have been made to this file. Automatak, LLC licenses these modifications
 * to you under the terms of the License.
 */
#ifndef SECAUTH_OUTSTATIONAUTHSETTINGS_H
#define SECAUTH_OUTSTATIONAUTHSETTINGS_H

#include <opendnp3/outstation/OutstationParams.h>

#include "secauth/HMACMode.h"
#include "secauth/CriticalFunctions.h"

namespace secauth
{

/**
	SAv5 outstation authentication provider
*/
struct OutstationAuthSettings
{	
	OutstationAuthSettings();

	OutstationAuthSettings(const opendnp3::OutstationParams&);

	

	uint32_t maxRxASDUSize;
	uint32_t maxTxASDUSize;	
	openpal::TimeDuration challengeTimeout;
	uint16_t challengeSize;
	uint16_t assocId;
	HMACMode hmacMode;
	CriticalFunctions functions;

};

}

#endif
