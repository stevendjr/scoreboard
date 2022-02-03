//扫雷游戏计分板1.0
#include"lib.h"

using namespace my_using;

int main()
{
	SetConsoleTitle("扫雷游戏计分板");
	system("mode con lines=10 cols=50");
	system("color F0");
	ifstream fin("gameinfo.json");
	if(fin.is_open())
	{
		int a,b;
		fin>>a>>b;
		cout<<"已玩次数："<<a<<endl
			<<"已胜次数："<<b;
	}
	else
	{
		cout<<"无计分信息";
	}
	fin.close();
	while(true);
}
