#include "Exceptions.h"
#include "ShopAnalyzer.h"

int main() {
	ShopBuilder sb("Cartier", "Moyka, 55");
	Shop Cartier = sb.GetResult();
	
	ShopBuilder sb2("Hublot", "Nevsky, 1");
	Shop Hublot = sb2.GetResult();

	ProductBuilder pb;
	pb.CreateProduct("W1");
	pb.CreateProduct("W2", 4);
	pb.CreateProduct("W3", 2);
	pb.CreateProduct("W4", 1);
	pb.CreateProduct("W5", 1);

	Cartier.AddProduct(pb.GetResult(), 100);
	Hublot.AddProduct(pb.GetResult(), 399);

	Cartier.EditProductPrice(0, 200);
	Cartier.EditProductPrice(2, 400);
	Cartier.PrintAllProducts();
	Hublot.PrintAllProducts();

	
	ShopAnalyzer sa;
	sa.AddShop(Cartier);
	sa.AddShop(Hublot);


	std::vector<std::pair<std::string, unsigned>> productsToSearchPack;
	productsToSearchPack.push_back({ "W1", 2 });

	// Product: W1 is found, but amount is not enough at any shop.
	sa.WhichShopIsCheapest(productsToSearchPack); 

	std::vector<std::pair<std::string, unsigned>> productsToSearchPack2;
	productsToSearchPack2.push_back({ "W2", 3 });
	productsToSearchPack2.push_back({ "W1", 1 });
	sa.WhichShopIsCheapest(productsToSearchPack2);
	

}