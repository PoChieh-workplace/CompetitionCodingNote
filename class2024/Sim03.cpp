#include <iostream>
using namespace std;
namespace image_lib
{
	namespace algorithm
	{	
		class A
		{
		public:
			void f()
			{
				cout << "OK" << endl;
			}
		};
	};
};
// using namespace image_lib::algorithm;
int main()
{
	A a1;
	a1.f();	
	system("pause");
	return 0;
} 
