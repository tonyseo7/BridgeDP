
#include "stdafx.h"
#include "common.h"
#include "Camera.h"
#include "AFLens.h"
#include "VRModule.h"
#include "PCModule.h"

void TestAFRPCLens(Camera *camera);

void main()
{
	Camera *camera = new Camera();
	TestAFRPCLens(camera);

	delete camera;
}

void TestAFRPCLens(Camera *camera)
{
	cout << "AFVRPCLens �׽�Ʈ" << endl;
	VRModule *vr = new VRModule();
	PCModule *pc = new PCModule();


	Lens *lens = new AFLens();

	lens->AddModule(vr);
	lens->AddModule(pc);

	camera->PutInLens(lens);
	camera->TakeAPicture("�ٻ�Ͷ���(0) �������(1) �ǹ�(2) ��(3)", 1);

	delete vr;
	delete pc;
	delete lens;

}