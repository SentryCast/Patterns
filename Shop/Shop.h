#ifndef SHOP_H
#define SHOP_H

#include <iostream>
#include <vector>
#include <utility> // std::make_pair
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>

using uuid = boost::uuids::uuid;

class Product {
public:
	Product(std::string name)
		: _id(boost::uuids::random_generator()())
		, _name(std::move(name))
	{}

	const std::string& GetName();
	const uuid& GetId();

private:
	uuid _id;
	std::string _name;
};

class Shop {
public:
	Shop() {}
	Shop(std::string name, std::string address)
		: _id(boost::uuids::random_generator()())
		, _name(std::move(name))
		, _address(std::move(address))
	{}

	Shop(const Shop& shop) {
		_id = shop._id;
		_name = shop._name;
		_address = shop._address;
		_products = shop._products;
	}

	const std::string& GetAddress();
	const std::string& GetName();
	const uuid& GetId();
	void PrintAllProducts();

	void AddProduct(Product& product, int price);
	void AddProduct(const std::vector<Product>& products, int price);
	void EditProductPrice(unsigned productPosition, int newPrice);
	void ClearProducts();

	void operator=(const Shop& shop) {
		_id = shop._id;
		_name = shop._name;
		_address = shop._address;
		_products = shop._products;
	}

private:
	uuid _id;
	std::string _name;
	std::string _address;
	std::vector<std::pair<Product, int>> _products;
};

class ShopBuilder {
public:
	ShopBuilder() = delete;
	ShopBuilder(const std::string& name, const std::string& address) {
		_shop = Shop(name, address);
	}
	~ShopBuilder() {}

	void CreateShop(const std::string& name, const std::string& address);

	void PrintShopInfo();

	const Shop& GetResult();
	void Reset();

private:
	Shop _shop;
};

class ProductBuilder {
public:
	void CreateProduct(const std::string& name);
	void CreateProduct(const std::string& name, unsigned amount);

	void PrintAllProducts();
	void Reset();
	const std::vector<Product>& GetResult();
private:
	std::vector<Product> _products;
};


#endif // SHOP_H