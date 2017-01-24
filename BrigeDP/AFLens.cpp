#include "stdafx.h"
#include "AFLens.h"

string AFLens::Take(string subject, int distance)
{
	AutoFocusing(distance);
	subject = Processing(subject);

	return MakePicture(subject, distance);
}

void AFLens::AutoFocusing(int distance)
{
	while (distance > GetFocusLevel())
	{
		FocusUp();
	}

	while (distance < GetFocusLevel())
	{
		FocusDown();
	}
}

string AFLens::Processing(string subject)
{
	int mcount = GetModuleCount();

	for (int i = 0; i < mcount; i++)
	{
		subject = ImageProcessing(subject, i);
	}

	return subject;
}