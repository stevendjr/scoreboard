//ɨ����Ϸ�Ʒְ�1.0
#include"lib.h"

using namespace my_using;

int main()
{
	SetConsoleTitle("ɨ����Ϸ�Ʒְ�");
	system("mode con lines=10 cols=50");
	system("color F0");
	ifstream fin("gameinfo.json");
	if(fin.is_open())
	{
		int a,b;
		fin>>a>>b;
		cout<<"���������"<<a<<endl
			<<"��ʤ������"<<b;
	}
	else
	{
		cout<<"�޼Ʒ���Ϣ";
	}
	fin.close();
	while(true);
}
