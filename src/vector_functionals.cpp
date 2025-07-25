#include <cpp11.hpp>
#include <cpp11/declarations.hpp>
#include <boost/math/tools/norms.hpp>

extern "C" {
  SEXP l0_pseudo_norm_(SEXP x_) {
    BEGIN_CPP11
    std::vector<double> x = cpp11::as_cpp<std::vector<double>>(x_);
    size_t result = boost::math::tools::l0_pseudo_norm(x);
    return cpp11::as_sexp(result);
    END_CPP11
  }

  SEXP hamming_distance_(SEXP x_, SEXP y_) {
    BEGIN_CPP11
    std::vector<double> x = cpp11::as_cpp<std::vector<double>>(x_);
    std::vector<double> y = cpp11::as_cpp<std::vector<double>>(y_);
    size_t result = boost::math::tools::hamming_distance(x, y);
    return cpp11::as_sexp(result);
    END_CPP11
  }

  SEXP l1_norm_(SEXP x_) {
    BEGIN_CPP11
    std::vector<double> x = cpp11::as_cpp<std::vector<double>>(x_);
    double result = boost::math::tools::l1_norm(x);
    return cpp11::as_sexp(result);
    END_CPP11
  }

  SEXP l1_distance_(SEXP x_, SEXP y_) {
    BEGIN_CPP11
    std::vector<double> x = cpp11::as_cpp<std::vector<double>>(x_);
    std::vector<double> y = cpp11::as_cpp<std::vector<double>>(y_);
    double result = boost::math::tools::l1_distance(x, y);
    return cpp11::as_sexp(result);
    END_CPP11
  }

  SEXP l2_norm_(SEXP x_) {
    BEGIN_CPP11
    std::vector<double> x = cpp11::as_cpp<std::vector<double>>(x_);
    double result = boost::math::tools::l2_norm(x);
    return cpp11::as_sexp(result);
    END_CPP11
  }

  SEXP l2_distance_(SEXP x_, SEXP y_) {
    BEGIN_CPP11
    std::vector<double> x = cpp11::as_cpp<std::vector<double>>(x_);
    std::vector<double> y = cpp11::as_cpp<std::vector<double>>(y_);
    double result = boost::math::tools::l2_distance(x, y);
    return cpp11::as_sexp(result);
    END_CPP11
  }

  SEXP sup_norm_(SEXP x_) {
    BEGIN_CPP11
    std::vector<double> x = cpp11::as_cpp<std::vector<double>>(x_);
    double result = boost::math::tools::sup_norm(x);
    return cpp11::as_sexp(result);
    END_CPP11
  }

  SEXP sup_distance_(SEXP x_, SEXP y_) {
    BEGIN_CPP11
    std::vector<double> x = cpp11::as_cpp<std::vector<double>>(x_);
    std::vector<double> y = cpp11::as_cpp<std::vector<double>>(y_);
    double result = boost::math::tools::sup_distance(x, y);
    return cpp11::as_sexp(result);
    END_CPP11
  }

  SEXP lp_norm_(SEXP x_, SEXP p_) {
    BEGIN_CPP11
    std::vector<double> x = cpp11::as_cpp<std::vector<double>>(x_);
    uint64_t p = cpp11::as_cpp<uint64_t>(p_);
    double result = boost::math::tools::lp_norm(x, p);
    return cpp11::as_sexp(result);
    END_CPP11
  }

  SEXP lp_distance_(SEXP x_, SEXP y_, SEXP p_) {
    BEGIN_CPP11
    std::vector<double> x = cpp11::as_cpp<std::vector<double>>(x_);
    std::vector<double> y = cpp11::as_cpp<std::vector<double>>(y_);
    uint64_t p = cpp11::as_cpp<uint64_t>(p_);
    double result = boost::math::tools::lp_distance(x, y, p);
    return cpp11::as_sexp(result);
    END_CPP11
  }

  SEXP total_variation_(SEXP x_) {
    BEGIN_CPP11
    std::vector<double> x = cpp11::as_cpp<std::vector<double>>(x_);
    double result = boost::math::tools::total_variation(x);
    return cpp11::as_sexp(result);
    END_CPP11
  }
}
