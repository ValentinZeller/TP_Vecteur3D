#pragma once

#include <iostream>
using namespace std;

template <class T> class vect3D {
	T m_x, m_y, m_z;
public:
	vect3D(T x = 0, T y = 0, T z = 0);
	vect3D(vect3D& vect);
	
	vect3D<T> addition(const vect3D& vect);
	vect3D<T> soustraction(const vect3D& vect);
	vect3D<T> prodScal(const T scale);
	T prodScalVect(const vect3D& vect);
	vect3D<T> prodVect(const vect3D& vect);

	friend bool coincide(const vect3D& v1, const vect3D& v2)
	{
		if (v1.m_x == v2.m_x && v1.m_y == v2.m_y && v1.m_z == v2.m_z) {
			return true;
		}
		else {
			return false;
		}
	}

	void affiche() const;

	//Surcharge opérateur
	void operator=(const vect3D& vect);
	vect3D<T> operator+(const vect3D& vect);
	vect3D<T> operator-(const vect3D& vect);
	vect3D<T> operator*(const T scale);
	T operator*(const vect3D& vect);
	vect3D<T> operator^(const vect3D& vect);

	friend bool operator==(const vect3D& v1, const vect3D& v2) {
		if (v1.m_x == v2.m_x && v1.m_y == v2.m_y && v1.m_z == v2.m_z) {
			return true;
		}
		else {
			return false;
		}
	}

	friend ostream& operator<<(ostream& os, const vect3D v) {
		os << "Coordonnées : " << v.m_x << " " << v.m_y << " " << v.m_z << endl;
		return os;
	}
};

template<class T>
inline vect3D<T>::vect3D(T x, T y, T z)
{
	m_x = x;
	m_y = y;
	m_z = z;
}

template<class T>
inline vect3D<T>::vect3D(vect3D& vect)
{
	m_x = vect.m_x;
	m_y = vect.m_y;
	m_z = vect.m_z;
}

template<class T>
inline vect3D<T> vect3D<T>::addition(const vect3D& vect)
{
	vect3D<T> new_vect(m_x + vect.m_x , m_y + vect.m_y , m_z + vect.m_z);
	return new_vect;
}

template<class T>
inline vect3D<T> vect3D<T>::soustraction(const vect3D& vect)
{
	vect3D<T> new_vect(m_x - vect.m_x, m_y - vect.m_y, m_z - vect.m_z);
	return new_vect;
}

template<class T>
inline vect3D<T> vect3D<T>::prodScal(const T scale)
{
	vect3D<T> new_vect(m_x * scale, m_y * scale, m_z * scale);
	return new_vect;
}

template<class T>
inline T vect3D<T>::prodScalVect(const vect3D& vect)
{
	return m_x * vect.m_x + m_y * vect.m_y + m_z * vect.m_z;
}

template<class T>
inline vect3D<T> vect3D<T>::prodVect(const vect3D& vect)
{
	vect3D<T> new_vect(m_y * vect.m_z - m_z * vect.m_y , m_z * vect.m_x - m_z * vect.m_z , m_x * vect.m_y - m_y * vect.m_x);
	return new_vect;
}

template<class T>
inline void vect3D<T>::affiche() const
{
	cout << "Coordonnées : " << m_x << " " << m_y << " " << m_z << endl;
}

//Surcharge opérateur

template<class T>
inline void vect3D<T>::operator=(const vect3D& vect)
{
	m_x = vect.m_x;
	m_y = vect.m_y;
	m_z = vect.m_z;
}

template<class T>
inline vect3D<T> vect3D<T>::operator+(const vect3D& vect)
{
	vect3D<T> new_vect(m_x + vect.m_x, m_y + vect.m_y, m_z + vect.m_z);
	return new_vect;
}

template<class T>
inline vect3D<T> vect3D<T>::operator-(const vect3D& vect)
{
	vect3D<T> new_vect(m_x - vect.m_x, m_y - vect.m_y, m_z - vect.m_z);
	return new_vect;
}

template<class T>
inline vect3D<T> vect3D<T>::operator*(const T scale)
{
	vect3D<T> new_vect(m_x * scale, m_y * scale, m_z * scale);
	return new_vect;
}

template<class T>
inline T vect3D<T>::operator*(const vect3D& vect)
{
	return m_x * vect.m_x + m_y * vect.m_y + m_z * vect.m_z;
}

template<class T>
inline vect3D<T> vect3D<T>::operator^(const vect3D& vect)
{
	vect3D<T> new_vect(m_y * vect.m_z - m_z * vect.m_y, m_z * vect.m_x - m_z * vect.m_z, m_x * vect.m_y - m_y * vect.m_x);
	return new_vect;
}

