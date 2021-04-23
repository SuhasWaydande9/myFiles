#include <iostream>

using namespace std;

class Dog
{
public:
  void setInfo()
  {
    name = "Tipu";
    age = 6;
  }

  int ageAfter10Years()
  {
    return age + 10;
  };

  virtual int manga()
  {
    return 12;
  };

  string getName()
  {
    return name;
  };

  int getAge()
  {
    return age;
  };

  void setAge()
  {
    age = 15;
  };

  void setName(string newName)
  {
    name = newName;
  };

private:
  string name;
  int age;
};

class breed : public Dog
{
public:
  breed()
  {
    Dog::setInfo();
  }
  int manga()
  {
    return 15;
  };
};

int main()
{
  Dog dg;
  breed br;
  cout << br.getName() << endl;
  cout << br.manga() << endl;
  br.setName("Sima");
  cout << br.getAge() << endl;
  dg.setInfo();
  dg.setName("Samiksha");
  cout << dg.getAge() << endl;
  cout << dg.getName() << endl;
  cout << br.getName() << endl;
};
