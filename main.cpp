#include <iostream>

int main() {
  int productCost1;
  int productCost2;
  int productCost3;
  int diliveryCost;
  int price;
  int priceTotal;
  int totalCost;
  std::cout << "\nВведите стоимость первого товара: ";
  std::cin >> productCost1;
  std::cout << "\nВведите стоимость второго товара: ";
  std::cin >> productCost2;
  std::cout << "\nВведите стоимость третьего товара: ";
  std::cin >> productCost3;
  totalCost = productCost1 + productCost2 + productCost3;
  std::cout << "\nВведите стоимость доставки: ";
  std::cin >> diliveryCost;
  price = totalCost + diliveryCost;

  if (totalCost > 10000) {
    totalCost /= 10;
    std::cout << "\nСумма товаров превышает 10000 рублей.\n";
    std::cout << "Поэтому, Вам положена скидка 10%!\n";
    std::cout << "Сумма скидки: " << totalCost << " рублей.\n";
  }
  priceTotal = price - totalCost;
  std::cout << "\nИтого: " << priceTotal << " рублей.\n";
}