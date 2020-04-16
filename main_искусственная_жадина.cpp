#include <iostream> 
using namespace std;
int main()
{
    int A[] = { 500, 200, 100, 50, 20, 10 };
    int n, a, x;
    cin >> n ; 
    x=0;
    for(int i = 0; i < 6; ++i){
        a = A[i]; 
        x += n / a;
        n %= a;
    }
    if(n > 0) x = -1;
        cout << x; 
 return 0;
}
// если элементы массива А расположены не по убыванию, то можно сделать сортировку а дальше - по алгоритму
