#include "stdafx.h"
#include "Lens.h"
#include <bitset>
const int Lens::min_focuslevel = 1;
const int Lens::max_focuslevel = 3;

Lens::Lens(void)
{
	focuslevel = min_focuslevel;
	mindex = -1;
}

void Lens::FocusUp()
{
	if (focuslevel > min_focuslevel)
	{
		focuslevel++;
	}
}

void Lens::FocusDown()
{
	if (focuslevel > min_focuslevel)
	{
		focuslevel--;
	}

}

int Lens::GetFocusLevel() const
{
	return focuslevel;
}

void Lens::AddModule(Module *module)
{
	modules.push_back(module);
}

int Lens::GetModuleCount()const
{
	return modules.size();
}

int Lens::GetModuleIndex()const
{
	return mindex;
}

string Lens::ImageProcessing(string subject, int index)
{
	if ((index >= 0) || (index < GetModuleCount()))
	{
		Module *module = modules[index];
		subject = module->ImageProcessing(subject);
	}

	return subject;
}

string Lens::MakePicture(string subject, int distance)
{
	
	string s = std::to_string(distance);
	int index = -1;

	while ((index = subject.find(s, index + 1)) != -1)
	{
		subject.replace(index, s.size(), "Ό±Έν");
	}

	return subject;
}

void Lens::SetModuleIndex(int index)
{
	mindex = index;
}