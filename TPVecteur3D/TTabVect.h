#pragma once

#include "TVecteur2D.h"

template <class T, int n> class tabVecteur {
	T m_values[n];

public:
	T& operator[](int i);
	T operator[](int i)const;

	tabVecteur();
	~tabVecteur();

};

template<class T, int n>
inline T& tabVecteur<T, n>::operator[](int i)
{
	if (i >= 0 && i < n) {
		return m_values[i];
	}
	else {
		exit(1);
	}
}

template<class T, int n>
inline T tabVecteur<T, n>::operator[](int i) const
{
	if (i >= 0 && i < n) {
		return m_values[i];
	}
	else {
		exit(1);
	}
}

template<class T, int n>
inline tabVecteur<T, n>::tabVecteur()
{
}

template<class T, int n>
inline tabVecteur<T, n>::~tabVecteur()
{
}
