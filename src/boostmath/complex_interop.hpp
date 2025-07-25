#ifndef CPP11_COMPLEX_HPP
#define CPP11_COMPLEX_HPP

#include <cpp11.hpp>
#include <complex>

// cpp11 does not support interop for std::complex, implement our own and delegate to cpp11 only for other types

namespace boostmath {
  template <typename T, std::enable_if_t<std::is_same<T, std::complex<double>>::value>* = nullptr>
  inline std::complex<double> as_cpp(SEXP x) {
    Rcomplex r_complex = COMPLEX_ELT(x, 0);
    return std::complex<double>(r_complex.r, r_complex.i);
  }

  template <typename T, std::enable_if_t<!std::is_same<T, std::complex<double>>::value>* = nullptr>
  inline T as_cpp(SEXP x) {
    return cpp11::as_cpp<T>(x);
  }

  template <typename T, std::enable_if_t<std::is_same<T, std::complex<double>>::value>* = nullptr>
  inline SEXP as_sexp(const T& x) {
    SEXP data = cpp11::safe[Rf_allocVector](CPLXSXP, 1);
    Rcomplex* r_complex = COMPLEX(data);
    r_complex->r = x.real();
    r_complex->i = x.imag();
    return data;
  }

  template <typename T, std::enable_if_t<!std::is_same<T, std::complex<double>>::value>* = nullptr>
  inline SEXP as_sexp(const T& x) {
    return cpp11::as_sexp(x);
  }
}

#endif // CPP11_COMPLEX_HPP
