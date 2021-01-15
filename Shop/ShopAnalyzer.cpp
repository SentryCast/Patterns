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
	int cheapestPrice = INT32_MAX;
	std::string cheapestShopName;
	bool isFoundProductName = false;
	for (int i = 0; i < _shops.size(); ++i) {
		for (auto& product : _shops[i].GetAllProducts()) {
			if (product.first.GetName() == productName) {
				isFoundProductName = true;
				if (product.second < cheapestPrice) {
					cheapestPrice = product.second;
					cheapestShopName = _shops[i].GetName();
				}
			}
		}
	}

	if (isFoundProductName) {
		std::cout << "Cheapest Shop for product " << productName << "is: " << cheapestShopName 
			<< std::endl;
	}
	else {
		std::cout << "Have not found at least one of shops that contain a product with such name: " 
			<< productName << std::endl;
	}
}

void ShopAnalyzer::WhatCanIBuy(std::string shopName, int price) {
	std::vector<std::pair<std::string, int>> resultsNameAndAmount;

	for (auto& shop : _shops) {
		if (shop.GetName() == shopName) {
			for (int i = 0; i < shop.GetAllProducts().size(); ++i) {
				int amount = shop.GetProduct(i).second / price;
				if (amount > 0) {
					resultsNameAndAmount.push_back({ shop.GetProduct(i).first.GetName(), amount });
				}
			}
			break;
		}
	}

	if (!resultsNameAndAmount.empty()) {
		std::cout << "You can buy: " << std::endl;
		for (auto& resPair : resultsNameAndAmount) {
			std::cout << resPair.first << ", amount: " << resPair.second << std::endl;
		}
	}
	else {
		std::cout << "Not enough money to buy something in this shop: " << shopName << std::endl;
	}
}

void ShopAnalyzer::WhichShopIsCheapest(std::vector<std::pair<std::string, unsigned>>& productsAndAmount) {
	for (int i = 0; i < productsAndAmount.size(); ++i) {
		bool isFoundProductInAnyShop = false;
		bool isLocalAmountEnough = false;
		int cheapestPrice = INT32_MAX;
		std::string cheapestShopName;
		for (int j = 0; j < _shops.size(); ++j) {
			unsigned localAmount = 0;
			int localFinalPrice = 0;
			std::priority_queue<int, std::vector<int>, std::greater<int>> localPrices;
			for (auto& product : _shops[j].GetAllProducts()) {
				if (product.first.GetName() == productsAndAmount[i].first) {
					isFoundProductInAnyShop = true;
					localAmount++;
					localPrices.push(product.second);
				}
			}

			if (localAmount >= productsAndAmount[i].second) {
				for (unsigned k = 0; k < productsAndAmount[i].second; ++k) {
					localFinalPrice += localPrices.top();
					localPrices.pop();
				}
				if (localFinalPrice < cheapestPrice) {
					cheapestPrice = localFinalPrice;
					cheapestShopName = _shops[j].GetName();
				}
				isLocalAmountEnough = true;
			}
		}
		if (isLocalAmountEnough) {
			std::cout << "[ " << productsAndAmount[i].first << ", amount: " << productsAndAmount[i].second
				<< " ]\t" << "Cheapest shop is: " << cheapestShopName << ", cheapest price: " << cheapestPrice
				<< std::endl;
		}
		else if (isFoundProductInAnyShop) {
			std::cout << "Product: " << productsAndAmount[i].first 
				<< " is found, but amount is not enough at any shop." << std::endl;
		}
		else {
			std::cout << "No such product: " << productsAndAmount[i].first << " at any shop." << std::endl;
		}
	}
} // Better to refactor