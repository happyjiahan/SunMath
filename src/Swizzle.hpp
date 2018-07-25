#pragma once	

template<size_t N, typename T, int E0, int E1, int E2, int E3>
struct Swizzle
{
	char ptr[1];

	T& GetElement(size_t i)
	{
		return reinterpret_cast<T*>(ptr)[i]; 
	}

};