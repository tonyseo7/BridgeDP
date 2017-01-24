#include "stdafx.h"
#include "VRModule.h"

string VRModule::ImageProcessing(string subject)
{
	int index = -1;

	while ((index = subject.find("¶³¸²", index + 1)) != -1)
	{
		subject.replace(index, strlen("¶³¸²"), "");
	}

	return subject;

}