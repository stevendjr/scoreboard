#pragma once
////////////////////////////////////funcs.h/////////////////////////////////////
//funcs.h:�����Ĺ��ܺ���

//inline bool KEY_DOWN(int key)//�Ƿ�����ĳ��
//{
//	return((GetAsyncKeyState(key) bitand 0x8000)?true:false);
//}

inline void color(int a)//�ı������ɫ
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a);
}

inline void gotoxy(short x,short y)//�ı����λ��
{
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),{x,y});
}

////////////////////////////////////funcs.h/////////////////////////////////////
