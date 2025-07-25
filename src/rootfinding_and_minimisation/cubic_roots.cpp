#include <cpp11.hpp>
#include <cpp11/declarations.hpp>
#include <boost/math/tools/cubic_roots.hpp>

extern "C" {
  SEXP cubic_roots_(SEXP a_, SEXP b_, SEXP c_, SEXP d_) {
    BEGIN_CPP11
    double a = cpp11::as_cpp<double>(a_);
    double b = cpp11::as_cpp<double>(b_);
    double c = cpp11::as_cpp<double>(c_);
    double d = cpp11::as_cpp<double>(d_);

    std::array<double, 3> roots = boost::math::tools::cubic_roots(a, b, c, d);
    std::vector<double> result{roots[0], roots[1], roots[2]};

    return cpp11::as_sexp(result);
    END_CPP11
  }

  SEXP cubic_root_residual_(SEXP a_, SEXP b_, SEXP c_, SEXP d_, SEXP root_) {
    BEGIN_CPP11
    double a = cpp11::as_cpp<double>(a_);
    double b = cpp11::as_cpp<double>(b_);
    double c = cpp11::as_cpp<double>(c_);
    double d = cpp11::as_cpp<double>(d_);
    double root = cpp11::as_cpp<double>(root_);

    std::array<double, 2> residual = boost::math::tools::cubic_root_residual(a, b, c, d, root);
    std::vector<double> result{residual[0], residual[1]};

    return cpp11::as_sexp(result);
    END_CPP11
  }

  SEXP cubic_root_condition_number_(SEXP a_, SEXP b_, SEXP c_, SEXP d_, SEXP root_) {
    BEGIN_CPP11
    double a = cpp11::as_cpp<double>(a_);
    double b = cpp11::as_cpp<double>(b_);
    double c = cpp11::as_cpp<double>(c_);
    double d = cpp11::as_cpp<double>(d_);
    double root = cpp11::as_cpp<double>(root_);

    double condition_number = boost::math::tools::cubic_root_condition_number(a, b, c, d, root);

    return cpp11::as_sexp(condition_number);
    END_CPP11
  }
} // extern "C"
