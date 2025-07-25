#include <cpp11.hpp>
#include <cpp11/declarations.hpp>
#include <boost/math/special_functions/bernoulli.hpp>
#include <boost/math/special_functions/prime.hpp>
#include <boost/math/special_functions/fibonacci.hpp>
#include "../boostmath/macros.hpp"

UNARY_BOOST_FUNCTION(bernoulli_b2n, double);
UNARY_BOOST_FUNCTION(unchecked_bernoulli_b2n, int);
UNARY_BOOST_FUNCTION(tangent_t2n, double);
UNARY_BOOST_FUNCTION(fibonacci, int);
UNARY_BOOST_FUNCTION(unchecked_fibonacci, int);
BINARY_BOOST_FUNCTION_VECTOR_SUFFIX(bernoulli_b2n, range_, uint64_t, uint64_t);
BINARY_BOOST_FUNCTION_VECTOR_SUFFIX(tangent_t2n, range_, uint64_t, uint64_t);

extern "C" {
  SEXP max_bernoulli_b2n_() {
    BEGIN_CPP11
    int result = boost::math::max_bernoulli_b2n<double>::value;
    return cpp11::as_sexp(result);
    END_CPP11
  }

  SEXP prime_(SEXP n_) {
    BEGIN_CPP11
    int n = cpp11::as_cpp<int>(n_);
    int result = boost::math::prime(n);
    return cpp11::as_sexp(result);
    END_CPP11
  }

  SEXP max_prime_() {
    BEGIN_CPP11
    int result = boost::math::max_prime;
    return cpp11::as_sexp(result);
    END_CPP11
  }
}
