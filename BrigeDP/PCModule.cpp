#include "stdafx.h"
#include "PCModule.h"

string PCModule::ImageProcessing(string subject)
{
	int index = -1;

	while((index = subject.find("0", index + 1)) != -1)
	{
		subject.replace(index, strlen("0"), "1");
	}

	return subject;
};