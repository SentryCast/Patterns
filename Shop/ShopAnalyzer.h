#ifndef SHOPANALYZER_H
#define SHOPANALYZER_H
#include "Shop.h"

class ShopAnalyzer
{
public:
	void AddShop(Shop& shop);
	void PrintAllShops();

	void FindCheapestShopOfProduct(std::string productName);
	void WhatCanIBuy(int price);
	void BuyPack(const std::string& name, unsigned amount);
	void WhichShopIsCheapest();
private:
	std::vector<Shop> _shops;
	
};

#endif // SHOPANALYZER_H

