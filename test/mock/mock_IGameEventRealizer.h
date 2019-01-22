/*
 * mock_IGameEventRealizer.h, part of VCMI engine
 *
 * Authors: listed in file AUTHORS in main folder
 *
 * License: GNU General Public License v2.0 or later
 * Full text of license available in license.txt file, in main folder
 *
 */

#pragma once


#include <vcmi/scripting/Service.h>

class IGameEventRealizerMock : public IGameEventRealizer
{
public:
	MOCK_METHOD1(commitPackage, void(CPackForClient *));
};
