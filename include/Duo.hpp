//
// Created by jiahan on 02/07/2018.
//

#pragma once

BEGIN_NS(SunMath)

template <typename A, typename B>
class Duo
{

};


template <typename A, typename B, typename C>
class Duo<A, Duo<B,C> > {
public:
    typedef A        T1;           // type of first field
    typedef Duo<B,C> T2;           // type of second field
    enum { N = Duo<B,C>::N + 1 };  // number of fields

private:
    T1 value1;         // value of first field
    T2 value2;         // value of second field

public:
    // constructors
    Duo() : value1(), value2() {
    }
    Duo (T1 const & a, T2 const & b)
            : value1(a), value2(b) {
    }

    // for implicit type conversion during construction
    template <typename U1, typename U2>
    Duo (Duo<U1,U2> const & d)
            : value1(d.v1()), value2(d.v2()) {
    }

    // for implicit type conversion during assignments
    template <typename U1, typename U2>
    Duo<T1, T2>& operator = (Duo<U1,U2> const & d) {
        value1 = d.value1;
        value2 = d.value2;
        return *this;
    }

    // field access
    T1& v1() {
        return value1;
    }
    T1 const& v1() const {
        return value1;
    }


    T2& v2() {
        return value2;
    }
    T2 const& v2() const {
        return value2;
    }
};




END_NS
