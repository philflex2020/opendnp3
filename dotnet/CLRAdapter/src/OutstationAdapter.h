/*
 * Copyright 2013-2019 Automatak, LLC
 *
 * Licensed to Green Energy Corp (www.greenenergycorp.com) and Automatak
 * LLC (www.automatak.com) under one or more contributor license agreements. 
 * See the NOTICE file distributed with this work for additional information
 * regarding copyright ownership. Green Energy Corp and Automatak LLC license
 * this file to you under the Apache License, Version 2.0 (the "License"); you
 * may not use this file except in compliance with the License. You may obtain
 * a copy of the License at:
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef OPENDNP3CLR_OUTSTATION_ADAPTER_H
#define OPENDNP3CLR_OUTSTATION_ADAPTER_H

#include <asiodnp3/IOutstation.h>

using namespace Automatak::DNP3::Interface;

using namespace System::Collections::ObjectModel;

namespace Automatak
{
	namespace DNP3
	{
		namespace Adapter
		{

			private ref class OutstationAdapter : IOutstation
			{
			public:

				OutstationAdapter(const std::shared_ptr<asiodnp3::IOutstation>& outstation);

				~OutstationAdapter() { this ->!OutstationAdapter(); }
				!OutstationAdapter();

				virtual void SetLogFilters(LogFilter filters);

				virtual void Load(IChangeSet^ changes);

				virtual void SetRestartIIN();

				virtual void Shutdown();

				virtual void Enable();

				virtual void Disable();

				virtual IStackStatistics^ GetStackStatistics();

			private:

				std::shared_ptr<asiodnp3::IOutstation>* outstation;
			};

		}
	}
}

#endif
