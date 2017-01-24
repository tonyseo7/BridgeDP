#include "stdafx.h"
#include "MFLens.h"

string MFLens::Take(string subject, int distance)
{
	int mindex = GetModuleIndex();
	int mcount = GetModuleCount();

	if ((mindex >= 0) && (mindex < mcount))
	{
		subject = ImageProcessing(subject, mindex);
	}

	return MakePicture(subject, GetFocusLevel());
}

void MFLens::FocusUp()
{
	Lens::FocusUp();
	cout << "현재 FocusLevel:" << GetFocusLevel() << endl;
}

void MFLens::FocusDown()
{
	Lens::FocusDown();
	cout << "현재 FocusLevel:" << GetFocusLevel() << endl;
}