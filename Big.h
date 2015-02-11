using namespace std;

// function template for Big
template < class T >
T Biggest(T first, T second)
{
	T biggest;
	if (first > second)
	{
		biggest = first;
	}
	else
	{
		biggest = second;
	}
	return biggest;
}

template < class U >
string Greatest(U first, U second)
{
	string greatest;
	
	if (first > second)
	{
		greatest = "first";
	}
	else if (second > first)
	{
		greatest = "second";
	}
	else
	{
		greatest = "neither";
	}
	return greatest;
}
