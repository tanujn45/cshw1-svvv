/*
Author__________Tanuj Namdeo
Program_________Operator overloading
email___________tanujn45@gmail.com
*/

#include "conio.h"
#include "stdio.h"

class Complex {
  private:
    int real, img;

  public:
    // Constructor function
    Complex(int real, int img) {
      this->real = real;
      this->img = img;
    }

    // Operator overloading
    Complex operator +(Complex& n) {
      Complex ans(0, 0);
      ans.real = real + n.real;
      ans.img = real + n.img;
      return ans;
    }

    Complex operator -(Complex& n) {
      Complex ans(0, 0);
      ans.real = real - n.real;
      ans.img = img - n.img;
      return ans;
    }

    Complex operator *(Complex& n) {
      Complex ans(0, 0);
      ans.real = (real * n.real) - (img * n.img);
      ans.img = (img * n.real) + (real * n.img);
      return ans;
    }

    // Getter functions
    int getReal() {
      return real;
    }

    int getImg() {
      return img;
    }
};

int main() {
  Complex n1(3, 2);
  Complex n2(2, 3);
  Complex n3(4, 2);
  Complex n4(2, 5);
  Complex ans = n1 * n2 - n4 + n3;
  printf("Result = %d + %di\n", ans.getReal(), ans.getImg());
  return 0;
}
