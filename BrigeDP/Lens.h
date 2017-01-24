#pragma once
#include "Module.h"
typedef vector<Module *> MVector;
typedef vector<Module *>::iterator MIter;

class Lens
{
	int focuslevel;
	static const int min_focuslevel;
	static const int max_focuslevel;
	MVector modules;
	int mindex;

public:
	Lens(void);
	virtual string Take(string subject, int distance) = 0;
	virtual void FocusUp();
	virtual void FocusDown();
	int GetFocusLevel()const;
	void AddModule(Module *module);
	void SetModuleIndex(int index);
	int GetModuleCount()const;

protected:
	int GetModuleIndex()const;
	string ImageProcessing(string subject, int index);
	string MakePicture(string subject, int distance);
};
