#pragma once

#include "TVecteur3D.h"

template <class T> class vect2D : public vect3D<T> {
public:
	vect2D(T x = 0, T y = 0);
	vect2D(vect2D& vect);

	friend bool coincide(const vect2D& v1, const vect2D& v2)
	{
		if (v1.m_x == v2.m_x && v1.m_y == v2.m_y) {
			return true;
		}
		else {
			return false;
		}
	}

	void affiche() const;
	friend ostream& operator<<(ostream& os, vect2D v) {
		os << "Coordonnées : " << v.m_x << " " << v.m_y << endl;
		return os;
	}

	vect2D<T> addition(vect2D vect);
	vect2D<T> soustraction(vect2D vect);
	vect2D<T> prodScal(T scale);
	T prodScalVect(vect2D vect);

	vect2D<T>& operator=(const vect2D& vect);
	vect2D<T> operator+(vect2D vect);
	vect2D<T> operator-(vect2D vect);
	vect2D<T> operator*(T scale);
	T operator*(vect2D vect);
};

template <class T>
inline vect2D<T>::vect2D(T x, T y) : vect3D<T>(x, y, 1) {}

template<class T>
inline vect2D<T>::vect2D(vect2D& vect)
{
	this->m_x = vect.m_x;
	this->m_y = vect.m_y;
}

template<class T>
inline void vect2D<T>::affiche() const
{
	cout << "Coordonnées : " << this->m_x << " " << this->m_y << endl;
}

template<class T>
inline vect2D<T> vect2D<T>::addition(vect2D vect)
{
	vect2D new_vect(this->m_x + vect.m_x, this->m_y + vect.m_y);
	return new_vect;
}

template<class T>
inline vect2D<T> vect2D<T>::soustraction(vect2D vect)
{
	vect2D new_vect(this->m_x - vect.m_x, this->m_y - vect.m_y);
	return new_vect;
}

template<class T>
inline vect2D<T> vect2D<T>::prodScal(T scale)
{
	vect2D new_vect(this->m_x * scale, this->m_y * scale);
	return new_vect;
}

template<class T>
inline T vect2D<T>::prodScalVect(vect2D vect)
{
	return this->m_x * vect.m_x + this->m_y + vect.m_y;
}

template<class T>
inline vect2D<T>& vect2D<T>::operator=(const vect2D& vect)
{
	this->m_x = vect.m_x;
	this->m_y = vect.m_y;
	return *this;
}

template<class T>
inline vect2D<T> vect2D<T>::operator+(vect2D vect)
{
	vect2D new_vect(this->m_x + vect.m_x, this->m_y + vect.m_y);
	return new_vect;
}

template<class T>
inline vect2D<T> vect2D<T>::operator-(vect2D vect)
{
	vect2D new_vect(this->m_x - vect.m_x, this->m_y - vect.m_y);
	return new_vect;
}

template<class T>
inline vect2D<T> vect2D<T>::operator*(T scale)
{
	vect2D new_vect(this->m_x * scale, this->m_y * scale);
	return new_vect;
}

template<class T>
inline T vect2D<T>::operator*(vect2D vect)
{
	return this->m_x * vect.m_x + this->m_y + vect.m_y;
}
