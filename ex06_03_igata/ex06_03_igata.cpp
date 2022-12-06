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
	cout << "haba" << endl;
	cin >> width;
	cout << "takasa" << endl;
	cin >> height;
	cout << "okuyuki" << endl;
	cin >> depth;
	Box* box = new Box(width, height, depth);
	cout << "boxの表面積" << box->GetSurface() << "boxの体積 " << box->GetVolume();
	delete box;
}