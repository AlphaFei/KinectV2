// Kinect2Win32App.cpp : �������̨Ӧ�ó������ڵ㡣
/****************************************************
������:�������뵶�˶�����
��������:win32����̨Ӧ�ó��� x86���� (��������)
		VisualStudio 2013 (��������)
		KinectSDK-v2.0-PublicPreview1409-Setup (Kinect SDK�����汾, http://guoming.me/kinect2)
		Windows 8.1 (����ϵͳ)
������Ա:С��/����
����ʱ��:2015-4-11~ 2015-5-30
��ϵ��ʽ:	i@guoming.me (���䣬�Ƽ���ϵ��ʽ)
******************************************************/
#include "stdafx.h"
#include "Tools.h"
#include <windows.h>
#include <Mmsystem.h>//��Ҫ Winmm.lib���֧�� ----timeGetTime()
#include "Kinect.h"
//������
int main()
{
	printf_s("start analysis Kinect for Windows V2 body data....");
	CKinect kinect;
	kinect.InitKinect();
	while(1)
	{
		kinect.Update();
	}
	return 0;
}
