template < class T >
T MultiplyBy(T number, int multiple)
{
	number *= multiple;
	return number;
}

template < class U >
U SumArrayElements(U myArray[], int length)
{
	T sum = 0;

	for (int i = 0, i < length; i++)
	{
		sum += my Array[i];
	}

	return sum;
}