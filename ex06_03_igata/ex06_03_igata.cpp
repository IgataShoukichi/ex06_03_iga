#include <iostream>
using namespace std;

class Box {
public:
	float width, height, depth;

	Box(float width, float height, float depth)
	{
		this->width = width;
		this->height = height;
		this->depth = depth;
	}
	float GetVolume()
	{
		return width * height * depth;
	}
	float GetSurface()
	{
		return (width * height + height * depth + depth * width) * 2;
	}
};
int Main()
{
	float width, height, depth;
	cout << "幅" << endl;
	cin >> width;
	cout << "高さ" << endl;
	cin >> height;
	cout << "奥行き" << endl;
	cin >> depth;
	Box* box = new Box(width, height, depth);
	cout << "boxの表面積" << box->GetSurface() << "boxの体積 " << box->GetVolume();
	delete box;
}