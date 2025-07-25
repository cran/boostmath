#include <cpp11.hpp>
#include <cpp11/declarations.hpp>
#include <boost/math/quadrature/trapezoidal.hpp>

extern "C" {
  SEXP trapezoidal_(SEXP f_, SEXP a_, SEXP b_, SEXP tol_, SEXP max_refinements_) {
    BEGIN_CPP11
    cpp11::function f(f_);
    double a = cpp11::as_cpp<double>(a_);
    double b = cpp11::as_cpp<double>(b_);
    double tol = cpp11::as_cpp<double>(tol_);
    size_t max_refinements = cpp11::as_cpp<size_t>(max_refinements_);

    auto func = [&f](double x) {
      return cpp11::as_cpp<double>(f(x));
    };

    double result = boost::math::quadrature::trapezoidal(func, a, b, tol, max_refinements);
    return cpp11::as_sexp(result);
    END_CPP11
  }
}
