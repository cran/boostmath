#include <cpp11.hpp>
#include <cpp11/declarations.hpp>
#include <boost/math/quadrature/gauss_kronrod.hpp>
#include <boost/preprocessor/iteration/local.hpp>

extern "C" {
  SEXP gauss_kronrod_(SEXP f_, SEXP a_, SEXP b_, SEXP points_, SEXP max_depth_, SEXP tol_) {
    BEGIN_CPP11
    cpp11::function f(f_);
    double a = cpp11::as_cpp<double>(a_);
    double b = cpp11::as_cpp<double>(b_);
    size_t points = cpp11::as_cpp<size_t>(points_);
    size_t max_depth = cpp11::as_cpp<size_t>(max_depth_);
    double tol = cpp11::as_cpp<double>(tol_);

    auto func = [&f](double x) {
      return cpp11::as_cpp<double>(f(x));
    };

    double result;

    switch (points) {
#define BOOST_PP_LOCAL_MACRO(n) \
      case n: \
        result = boost::math::quadrature::gauss_kronrod<double, n>::integrate(func, a, b, max_depth, tol); \
        break;
#define BOOST_PP_LOCAL_LIMITS (1, 200)
#include BOOST_PP_LOCAL_ITERATE()
    }

    return cpp11::as_sexp(result);
    END_CPP11
  }
}
