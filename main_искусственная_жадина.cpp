#include <iostream> 
using namespace std;
int main()
{
    long long A[] = {429, 357, 355, 289, 139, 101, 80, 79,61, 60, 59, 37, 36, 25, 23, 22, 10, 7, 6, 1};
    long long n=100000, a, x;
    x=0;
    for(int i = 0; i < 20; ++i){
        a = A[i]; 
        x += n / a;
        n %= a;
    }
    if(n > 0) x = -1;
        cout << x; 
 return 0;
}
// если элементы массива А расположены не по убыванию, то можно сделать сортировку а дальше - по алгоритму
//1ая задача
#include <cstdio>
#include <vector>
#include <iostream>
void a(std::vector<long long> m, long long l, long long r) {
    while (l <= r) {
        for (long long i = 0; i < (long long)m.size(); ++i) {
            std::cout << m[i] << "+";
        }
        std::cout << l << "+"<< r << endl;
        m.push_back(l);
        if (r - l >= l) {
            a(m, l, r - l);
        }
        m.pop_back();
        ++l;
        --r;
    }
}
 
int main() {
    long n;
    std::cin >> n;
    vector<long long> m;
    a(m, 1, n - 1);
}
