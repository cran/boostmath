#include <cpp11.hpp>
#include <cpp11/declarations.hpp>
#include <boost/math/special_functions/factorials.hpp>
#include <boost/math/special_functions/binomial.hpp>
#include "../boostmath/macros.hpp"

UNARY_BOOST_FUNCTION(factorial, uint64_t);
UNARY_BOOST_FUNCTION(unchecked_factorial, uint64_t);
UNARY_BOOST_FUNCTION(double_factorial, uint64_t);
BINARY_BOOST_FUNCTION(rising_factorial, double, uint64_t);
BINARY_BOOST_FUNCTION(falling_factorial, double, uint64_t);

extern "C" {
  SEXP max_factorial_() {
    BEGIN_CPP11
    uint64_t result = boost::math::max_factorial<double>::value;
    return cpp11::as_sexp(result);
    END_CPP11
  }

  SEXP binomial_coefficient_(SEXP n_, SEXP k_) {
    BEGIN_CPP11
    uint64_t n = cpp11::as_cpp<uint64_t>(n_);
    uint64_t k = cpp11::as_cpp<uint64_t>(k_);
    double result = boost::math::binomial_coefficient<double>(n, k);
    return cpp11::as_sexp(result);
    END_CPP11
  }
}
