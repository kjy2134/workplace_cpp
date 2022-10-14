#include <iostream>
using namespace std;
class alpha {
    int x;
public: alpha(int i) {
    x = i;
    cout << "alpha initialized"<<endl;
}
      void show_alpha(void) {
          cout << "x ="<< x << endl;
      }
};
class beta {
    float p, q;
public: beta(float a, float b) : p(a), q(b + b) {
    cout << "beta constructed"<<endl;
}
      void show_beta(void) {
          cout << "p =" << p << endl;
          cout << "q = " << q << endl;
      }
};
class gamma :public alpha, public beta {
    int v, u;
public:
    gamma(int a, int b, float c) : alpha(a* a), beta(c, c), u(a) {
        v = b;
        cout << "gamma constructed"<<endl;
    }
    void show_gamma(void) {
        cout << "u = " << u << endl
            << "v = " << v << endl;
    }
};
int main(void) {
    gamma g(2, 4, 2.5);
    cout << "display member values"<< endl;
    g.show_alpha();
    g.show_beta();
    g.show_gamma();
    return 0;
}
