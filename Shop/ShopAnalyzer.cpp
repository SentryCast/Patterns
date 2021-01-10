#include "ShopAnalyzer.h"

void ShopAnalyzer::AddShop(Shop& shop) {
	_shops.push_back(shop);
}

void ShopAnalyzer::PrintAllShops() {
	for (auto& shop : _shops) {
		std::cout << shop.GetName() << std::endl;
	}
}

void ShopAnalyzer::FindCheapestShopOfProduct(std::string productName) {

}

