// ctp_trade.cpp : �������̨Ӧ�ó������ڵ㡣

#include "MdManager.h"

int main(int argc, char* argv[])
{
	CMdManager mana;
	mana.initial_md_manager();

	std::vector<std::string> vect;
	vect.push_back("IF1604");
	vect.push_back("TF1606");

	mana.subscribe_market(vect);
	mana.open_consumer_thread();


	while (true)
	{
		int i = 0;
	}

	mana.close_consumer_thread();
	mana.release_md_manager();

	return 0;
}
