#include "Shop.h"

const std::string& Shop::GetAddress() {
	return _address;
}

const std::string& Shop::GetName() {
	return _name;
}

const uuid& Shop::GetId() {
	return _id;
}

void Shop::AddProduct(Product& prod, int price) {
	_products.push_back({ prod, price });
}

void Shop::AddProduct(const std::vector<Product>& products, int price) {
	for (int i = 0; i < products.size(); ++i) {
		_products.push_back({products[i], price});
	}
}

void Shop::PrintAllProducts() {
	std::cout << "=== Products in " << this->GetName() << ": ===" << std::endl;
	for (auto& p : _products) {
		std::cout << "Name: " << p.first.GetName() << "; Price: " << p.second << std::endl;
	}
	std::cout << "\n";
}

void Shop::EditProductPrice(unsigned productPosition, int newPrice) {
	_products[productPosition].second = newPrice;
}

void Shop::ClearProducts() {
	_products.clear();
}


const std::string& Product::GetName() {
	return _name;
}

const uuid& Product::GetId() {
	return _id;
}


void ShopBuilder::CreateShop(const std::string& name, const std::string& address) {
	_shop = Shop(name, address);
}

void ShopBuilder::PrintShopInfo() {
	std::cout << "=== Shop Info: ===" << std::endl;
	std::cout << "Shop name: " << _shop.GetName() << std::endl;
	std::cout << "Shop address: " << _shop.GetAddress() << std::endl;
}

const Shop& ShopBuilder::GetResult() {
	return _shop;
}

void ShopBuilder::Reset() {
	Shop shop(_shop.GetName(), _shop.GetAddress());
	_shop = shop;
}


void ProductBuilder::CreateProduct(const std::string& name) {
	Product product(name);
	_products.push_back(product);

}

void ProductBuilder::CreateProduct(const std::string& name, unsigned amount) {
	for (unsigned i = 0; i < amount; ++i) {
		Product product(name);
		_products.push_back(product);
	}
}

void ProductBuilder::PrintAllProducts() {
	std::cout << "=== Printing All Products: ===" << std::endl;
	for (int i = 0; i < _products.size(); ++i) {
		std::cout << _products[i].GetName() << std::endl;
	}
}

void ProductBuilder::Reset() {
	_products.clear();
}

const std::vector<Product>& ProductBuilder::GetResult() {
	return _products;
}

void Customer::BuyPack(Shop& shop, const std::string& productName, unsigned amount) {
	unsigned localAmount = 0;
	std::vector<int> savedPositions;
	for (int i = 0; i < shop.GetAllProducts().size(); ++i) {
		if (shop.GetProduct(i).first.GetName() == productName) {
			localAmount++;
			savedPositions.push_back(i);
		}
	}
	if (localAmount > 0 && localAmount >= amount) {
		for (int i = 0; i < savedPositions.size(); ++i) {
			shop.GetAllProducts().erase(shop.GetAllProducts().begin() + savedPositions[i]);
		}
		std::cout << this->GetName() << " bought " << localAmount << " items of product " 
			<< productName << std::endl;
	}
	else if (localAmount > 0) {
		std::cout << "Not enough products in this shop: " << shop.GetName() << ". Found: " << localAmount 
			<< std::endl;
	}
	else {
		std::cout << "Have not found any products in this shop: " << shop.GetName() << std::endl;
	}
}

const std::string& Customer::GetName() {
	return _name;
}