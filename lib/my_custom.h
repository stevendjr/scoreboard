#pragma once
//////////////////////////////////my_custom.h///////////////////////////////////
//my_custom.h:����ĺ���������

#define MK_LEFT FROM_LEFT_1ST_BUTTON_PRESSED//���
//#define MK_MIDDLE FROM_LEFT_2ND_BUTTON_PRESSED//�м�
#define MK_RIGHT RIGHTMOST_BUTTON_PRESSED//�Ҽ�
//#define M_MOVED MOUSE_MOVED
//#define M_WHEELED MOUSE_WHEELED
//#define M_DOUBLE_CLICK DOUBLE_CLICK

const int back_white=BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_BLUE | 
	BACKGROUND_GREEN;
//const int fore_white=FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN;
typedef COORD console_pos;
const int length=9,height=9,num=10;//����������
enum {NONE,RESTART,NEW_GAME};

namespace my_using
{
	using std::cout;
	using std::endl;
	using std::ifstream;
	using std::ofstream;
}//ʹ�õ����� 

//////////////////////////////////my_custom.h///////////////////////////////////
