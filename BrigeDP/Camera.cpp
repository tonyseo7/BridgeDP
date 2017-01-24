#include "stdafx.h"
#include "Camera.h"

Camera::Camera(void)
{
	lens = 0;
}

void Camera::PutInLens(Lens *_lens)
{
	lens = _lens;
}


void Camera::TakeAPicture(string subject, int distance)
{
	cout << "�ǻ�ü" << subject << endl;
	if (lens == 0)
	{
		cout << "����:" << "*" << endl;
	}

	cout << "����:" << lens->Take(subject, distance) << endl;
}

void Camera::FocusUp()
{
	if (lens != 0)
	{
		lens->FocusUp();
	}
}

void Camera::FocusDown()
{
	if (lens != 0)
	{
		lens->FocusDown();
	}
}

void Camera::SetModuleIndex(int index)
{
	if (lens != 0)
	{
		return lens->SetModuleIndex(index);
	}
}

int Camera::GetModuleCount()const
{
	if (lens != 0)
	{
		return lens->GetModuleCount();
	}

	return -1;
}