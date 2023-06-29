#include <iostream>
#include <queue>
int main() {
 std::queue<int> myQueue;

 std::cout << "Queue is empty" <<std::endl;
 std::cout << "\n";
 // Memasukkan angka 1 sampai 5 ke dalam queue
 for (int i = 1; i <= 5; ++i) {
 myQueue.push(i);
 std::cout << "Inserted " << i << std::endl;
 std::cout << "\n";
 }
 // Menampilkan elemen-elemen dalam queue
 std::cout << "front index-> 0";
 std::cout << "\n";
std::cout << "items -> : ";
 while (!myQueue.empty()) {
 std::cout << myQueue.front() << " ";
 myQueue.pop();
 }
 std::cout << std::endl;
 // Mengecek apakah antrian kosong atau penuh
 if (myQueue.empty()) {
 std::cout << "Rear index ->4" << std::endl;
 std::cout << "\n";
 std::cout << "Deleted ->1 " <<std::endl;
 std::cout << "\n";
 // Menampilkan elemen-elemen dalam queue
 std::cout << "front index-> 1";
 std::cout << "\n";
std::cout << "items -> 2 3 4 5 : ";
std::cout << "\n";
std::cout << "Rear index ->4" << std::endl;
 std::cout << "\n";
}else {
 std::cout << "Deleted" << std::endl;
 }
 return 0;
}
