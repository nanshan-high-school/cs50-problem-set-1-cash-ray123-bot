#include <iostream>
using namespace std;

int main() {
    cout << "請輸入你的價錢:"; 
    
    int price;
    cin >> price;
    int coin;

    if (price >= 1000) {
      coin = price % 10 + price / 10 % 10 + price / 100 % 10 + price / 1000 % 10;
    } else if ( price < 1000 && price >= 500) {
      coin = price % 10 + price / 10 % 10 + (price - 500) / 100 + 1; 
    } else if (price < 500 && price >= 100) {
      coin = price / 100 + price / 10 % 10 + price % 10;
    } else if (price < 100 && price >= 50) {
      coin = (price - 50 / 10) + price % 10 + 1;
    } else {
      coin = price % 10 + price / 10;
    }

    cout << coin;   
}
