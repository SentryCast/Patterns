#ifndef SHOPANALYZER_H
#define SHOPANALYZER_H
#include "Shop.h"
#include <queue>

class ShopAnalyzer
{
public:
	ShopAnalyzer() = default;
	~ShopAnalyzer() = default;

	void AddShop(Shop& shop);
	void PrintAllShops();

	void FindCheapestShopOfProduct(std::string productName);
	void WhatCanIBuy(std::string shopName, int price);
	void WhichShopIsCheapest(std::vector<std::pair<std::string, unsigned>>& productsAndAmount);
private:
	std::vector<Shop> _shops;
	
};

#endif // SHOPANALYZER_H

