#include "Exceptions.h"
#include "Shop.h"

int main() {
	ShopBuilder sb("Cartier", "Moyka, 55");
	sb.PrintShopInfo();
	Shop Cartier = sb.GetResult();
	Cartier.PrintAllProducts();

	ProductBuilder pb;
	pb.CreateProduct("W1");
	pb.CreateProduct("W2", 4);

	Cartier.AddProduct(pb.GetResult(), 100);
	Cartier.PrintAllProducts();

	Cartier.EditProductPrice(0, 200);
	Cartier.EditProductPrice(2, 400);
	Cartier.PrintAllProducts();
}