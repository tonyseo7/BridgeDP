#pragma once
#include "Lens.h"

class Camera
{
	Lens *lens;

public:
	Camera(void);
	void PutInLens(Lens *_lens);
	void TakeAPicture(string subject, int distance);
	void FocusUp();
	void FocusDown();
	int GetModuleCount() const;
	void SetModuleIndex(int index);
};
